#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/game.h"
#include "../include/colors.h"

int is_starting_tile(tile_t tile)
/*
    This function checks if the tile is the starting tile.
    Takes in a tile_t struct.
    It returns 1 if it is the starting tile, 0 otherwise.
*/
{
    if (tile.data.tile_number == 0)
    {
        return 1;
    }
    return 0;
}

int is_owned(tile_t tile)
/*
    This function checks if the tile is owned by a player.
    Takes in a tile_t struct.
    It returns 1 if it is owned, 0 otherwise.
*/
{
    if (tile.data.owner != 0)
    {
        return 1;
    }
    return 0;
}

int is_empty(tile_t tile)
/*
    This function checks if the tile is empty.
    Takes in a tile_t struct.
    It returns 1 if it is empty, 0 otherwise.
*/
{
    if (tile.data.tile_number == 0 && tile.data.owner == 0)
    {
        return 1;
    }
    return 0;
}

int is_valid_move(tile_t level[6][6], int x, int y, int previous_tile_number)
/*
    This function checks if the move is valid.
    Takes in a tile_t level, the x and y coordinates of the tile, and the previous tile number.
    It returns 1 if it is valid, 0 otherwise.
*/
{
    if (x < 0 || x > 5 || y < 0 || y > 5) // check if the move is out of bounds
    {
        return 0;
    }
    else if (is_empty(level[y][x])) // check if the move is to an empty tile
    {
        return 0;
    }
    else if (is_owned(level[y][x])) // check if the move is to an owned tile
    {
        return 0;
    }
    else if (level[y][x].data.tile_number < previous_tile_number) // check if the move is to a tile with a lower number
    {
        return 0;
    }
    return 1;
}

int is_finished(tile_t level[6][6])
/*
    This function checks if the level is finished (by checking remaining non own tiles).
    Takes in a tile_t level.
    It returns 1 if it is finished, 0 otherwise.
*/

{
    int finished = 1;
    for (size_t y = 0; y < 6; y++)
    {
        for (size_t x = 0; x < 6; x++)
        {
            // if there is a tile that is not empty and not owned, the level is not finished
            if (!is_empty(level[y][x]) && !is_owned(level[y][x]))
            {
                finished = 0;
                break;
            }
        }
        if (!finished) // if the level is not finished, break the loop
        {
            break;
        }
    }
    return finished;
}

const char *is_selected(int x, int y, int *position)
/*
    This function checks if the tile is selected (current position).
    Takes in the x and y coordinates of the tile, and the position of the player.
    It returns a background color if it is selected, COLOR_RESET otherwise.
*/
{
    if (x == position[0] && y == position[1])
    {
        return BG_COLOR_WHITE;
    }
    return COLOR_RESET;
}

int move_player(tile_t (*level)[6][6], int *position, MoveDirection direction)
/*
    This function moves the player.
    Takes in a tile_t level, the position of the player, and the direction of the move.
    It returns 1 if the move is valid, 0 otherwise.
*/
{
    // copy the position to x and y
    int x = position[0];
    int y = position[1];
    int previous_owner = (*level)[y][x].data.owner;             // owner of the previous tile (the one the player is moving from)
    int previous_tile_number = (*level)[y][x].data.tile_number; // tile number of the previous tile (the one the player is moving from)
    switch (direction)
    {
    case MOVE_UP:
        y--;
        break;
    case MOVE_DOWN:
        y++;
        break;
    case MOVE_LEFT:
        x--;
        break;
    case MOVE_RIGHT:
        x++;
        break;
    }

    if (is_valid_move(*level, x, y, previous_tile_number)) // check if the move is valid with the new coordinates
    {
        position[0] = x; // update the position
        position[1] = y;
        (*level)[y][x].data.owner = previous_owner; // set the new owner of the tile
        return 1;
    }

    return 0;
}

int find_next_chain_id(tile_t level[6][6], int current_id, int last_positions[][2])
/*
    This function finds the next chain id.
    Takes in a tile_t level, the current chain id, and the last positions of the chains.
    It returns the next chain id.
*/
{
    int next_id = -1;              // -1 means no next chain is found
    for (size_t y = 0; y < 6; y++) // loop through the level
    {
        for (size_t x = 0; x < 6; x++)
        {
            // if the tile is a starting chain tile and the owner is greater than the current chain id
            if (level[y][x].data.tile_number == 0 && level[y][x].data.owner > current_id)
            {
                // if the next chain id is not set or the owner is less than the next chain id
                if (next_id == -1 || level[y][x].data.owner < next_id)
                {
                    next_id = level[y][x].data.owner; // set the next chain id
                }
            }
        }
    }

    if (next_id == -1) // If no next chain is found reset to the first chain
    {
        return 1;
    }

    // If the next chain is the first chain and it has a last position, skip it.
    if (next_id == 1 && last_positions[0][0] != -1 && last_positions[0][1] != -1)
    {
        next_id = find_next_chain_id(level, next_id, last_positions);
    }

    return next_id;
}

void change_to_next_chain(tile_t level[6][6], int *position, int last_positions[][2])
/*
    This function changes the chain to the next chain.
    Takes in a tile_t level, the position of the player, and the last positions of the chains.
*/
{
    int current_id = level[position[1]][position[0]].data.owner;         // current chain id
    int next_id = find_next_chain_id(level, current_id, last_positions); // next chain id

    // Save the current position as the last position for the current chain
    last_positions[current_id - 1][0] = position[0];
    last_positions[current_id - 1][1] = position[1];

    if (last_positions[next_id - 1][0] != -1 && last_positions[next_id - 1][1] != -1)
    {
        // If there's a last position for the next chain, go to that position
        position[0] = last_positions[next_id - 1][0];
        position[1] = last_positions[next_id - 1][1];
    }
    else
    {
        // If there's no last position for the next chain, find the starting position
        for (size_t y = 0; y < 6; y++)
        {
            for (size_t x = 0; x < 6; x++)
            {
                if (level[y][x].data.tile_number == 0 && level[y][x].data.owner == next_id)
                {
                    position[0] = x;
                    position[1] = y;
                    return;
                }
            }
        }
    }
}

void erase_current_chain(tile_t level[6][6], int *position)
/*
    This function erases the current chain.
    Takes in a tile_t level, and the position of the player.
*/
{
    // Get the ID of the player from the current position in the level
    int current_id = level[position[1]][position[0]].data.owner;
    // Initialize starting coordinates as -1, which indicates that they haven't been found yet
    int starting_x = -1;
    int starting_y = -1;

    // Iterate through the rows of the level
    for (size_t y = 0; y < 6; y++)
    {
        // Iterate through the columns of the level
        for (size_t x = 0; x < 6; x++)
        {
            // Check if the current tile belongs to the player with the current ID
            if (level[y][x].data.owner == current_id)
            {
                // If the current tile has a tile number of 0, it's the starting tile, so save its coordinates
                if (level[y][x].data.tile_number == 0)
                {
                    starting_x = x;
                    starting_y = y;
                }
                else
                {
                    // If the tile is not the starting tile, erase its owner by setting the owner to 0
                    level[y][x].data.owner = 0;
                }
            }
        }
    }

    // If starting coordinates have been found, update the position to the starting coordinates
    if (starting_x != -1 && starting_y != -1)
    {
        position[0] = starting_x;
        position[1] = starting_y;
    }
}

void undo_previous_move(tile_t level[6][6], int *position, Position *previous_moves, int *previous_moves_count)
/*
    This function undoes the previous move.
    Takes in a tile_t level, the position of the player, the previous moves array, and the previous moves count.
*/
{
    // If there are no previous moves, return without doing anything
    if (*previous_moves_count == 0)
    {
        return;
    }

    // Get the previous position from the previous_moves array
    int previous_x = previous_moves[*previous_moves_count - 2].x;
    int previous_y = previous_moves[*previous_moves_count - 2].y;

    // If the current position is not the starting tile (tile_number != 0)
    if (level[position[1]][position[0]].data.tile_number != 0)
    {
        // Erase the ownership of the current tile by setting the owner to 0
        level[position[1]][position[0]].data.owner = 0;
    }

    // Update the player's position to the previous position
    position[0] = previous_x;
    position[1] = previous_y;

    // Decrement the previous_moves_count to reflect the undo action
    *previous_moves_count -= 1;
}

void restart_level(tile_t level[][6], int position[], int starting_position[])
/*
    This function restarts the level.
    Takes in a tile_t level, the position of the player, and the starting position of the player.
*/
{
    // Reset tile ownership for all tiles except the starting tile
    for (int i = 0; i < 6; ++i)
    {
        for (int j = 0; j < 6; ++j)
        {
            if (level[i][j].data.owner != 0 && level[i][j].data.tile_number != 0)
            {
                level[i][j].data.owner = 0;
            }
        }
    }

    // Set the player's position back to the starting position
    position[0] = starting_position[0];
    position[1] = starting_position[1];
}

void ask_input(tile_t (*level)[6][6], int *position, int last_positions[][2], int starting_position[2], Position *previous_moves, int *previous_moves_count)
/*
    This function asks the user for input and performs the appropriate action.
    Takes in a tile_t level, the position of the player, the last positions array,
        the starting position of the player, the previous moves array, and the previous moves count.
*/
{
    char input;
    char buffer[256];
    printf(">> ");
    fgets(buffer, sizeof(buffer), stdin);
    input = buffer[0]; // Only read the first character of the input to avoid buffer overflow

    // Process the input character to determine the action to perform
    switch (input)
    {
    case KEY_MOVE_UP:
        move_player(level, position, MOVE_UP);
        break;
    case KEY_MOVE_DOWN:
        move_player(level, position, MOVE_DOWN);
        break;
    case KEY_MOVE_LEFT:
        move_player(level, position, MOVE_LEFT);
        break;
    case KEY_MOVE_RIGHT:
        move_player(level, position, MOVE_RIGHT);
        break;

    case KEY_CHANGE_CHAIN:
        change_to_next_chain(*level, position, last_positions);
        break;

    case KEY_ERASE_CHAIN:
        erase_current_chain(*level, position);
        break;

    case KEY_QUIT:
        exit(0);
        break;

    case KEY_RESTART_LEVEL:
        restart_level(*level, position, starting_position);
        break;

    case KEY_UNDO:
        undo_previous_move(*level, position, previous_moves, previous_moves_count);
        break;
    }
}

void represent_level(tile_t level[6][6], int *position)
/*
    This function prints the level representation to the console.
    It iterates through the level array and prints the tiles.
    It also prints the player's position with an 'X' and the player's color.
*/
{
    for (size_t y = 0; y < 6; y++)
    {
        for (size_t x = 0; x < 6; x++)
        {
            if (!is_empty(level[y][x]))
            {
                if (is_starting_tile(level[y][x]))
                {
                    // Print the starting tile with its owner's color and an 'X' as the content
                    printf("%s%sX%s ", is_selected(x, y, position), colors[level[y][x].data.owner], COLOR_RESET);
                }
                // If the current tile is owned by a player
                else if (is_owned(level[y][x]))
                {
                    // Print the tile with its owner's color and the tile number as the content
                    printf("%s%s%d%s ", is_selected(x, y, position), colors[level[y][x].data.owner], level[y][x].data.tile_number, COLOR_RESET);
                }
                else
                {
                    // Print the unowned tile with the tile number as the content
                    printf("%d ", level[y][x].data.tile_number);
                }
            }
            else
            {
                // Print an empty space for an empty tile
                printf("  ");
            }
        }
        // Print a newline character for each row
        printf("\n");
    }
}

void initialize_last_positions(int last_positions[][2], size_t num_chains)
/*
    This function initializes the last_positions array for the change_to_next_chain function.
    It sets all positions to -1.
    Takes in the last_positions array and the number of chains.
*/
{
    // Iterate through the last_positions array and set all positions to -1
    for (size_t i = 0; i < num_chains; i++)
    {
        last_positions[i][0] = -1;
        last_positions[i][1] = -1;
    }
}

void push_previous_move(int x, int y, Position *previous_moves, int *previous_moves_count)
/*
    This function adds a move to the previous_moves array.
    Takes in the x and y coordinates of the move, the previous_moves array, and the previous_moves_count.
*/
{
    // If the previous_moves_count is less than the maximum allowed moves
    if (*previous_moves_count < MAX_MOVES)
    {
        // Add the provided x and y coordinates as a new move to the previous_moves array
        previous_moves[*previous_moves_count].x = x;
        previous_moves[*previous_moves_count].y = y;
        // Increment the previous_moves_count
        *previous_moves_count += 1;
    }
    else
    {
        // Print an error message if the maximum number of moves has been reached
        printf("Too many moves");
    }
}

void display_info(tile_t level[6][6], int *position, int level_number)
{
    printf("Level %d\n", level_number);
    printf("--- line %d, column %d, chain: %s%s%s ---\n", position[1], position[0], colors[level[position[1]][position[0]].data.owner], colors_names[level[position[1]][position[0]].data.owner], COLOR_RESET);
    printf("Press %c to move up, %c to move down, %c to move left, %c to move right\n", KEY_MOVE_UP, KEY_MOVE_DOWN, KEY_MOVE_LEFT, KEY_MOVE_RIGHT);
    printf("press %c to cancel previous move\n", KEY_UNDO);
    printf("press %c to change chain\n", KEY_CHANGE_CHAIN);
    printf("press %c to erase chain\n", KEY_ERASE_CHAIN);
    printf("press %c to restart level\n", KEY_RESTART_LEVEL);
    printf("press %c to quit\n", KEY_QUIT);
}

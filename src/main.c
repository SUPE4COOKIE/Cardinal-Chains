#include <stdio.h>
#ifdef _WIN32
#include "../include/platform.h"
#endif
#include "../include/game.h"
#include "../levels/index.h"
#include "../include/main.h"

int main()
{
#ifdef _WIN32
    // Enable ANSI escape code support on Windows
    enable_virtual_terminal_processing();
#endif
    size_t number_of_levels = sizeof(LEVELS) / sizeof(LEVELS[0]);                   // get the number of levels
    Position previous_moves[MAX_MOVES];                                             // array of previous moves
    int previous_moves_index = 0;                                                   // index of the previous moves array
    for (size_t level_number = 1; level_number <= number_of_levels; level_number++) // loop through all the levels
    {
        // Find the selected level in the LEVELS array (this is needed because the levels could not be in order)
        level_info_t *selected_level = NULL;
        for (size_t i = 0; i < number_of_levels; i++)
        {
            if (LEVELS[i].level_number == level_number)
            {
                selected_level = &LEVELS[i];
                break;
            }
        }

        if (selected_level == NULL) // if we don't find the level, exit the program
        {
            printf("Error: Level %zu not found!\n", level_number);
            exit(1);
        }
        printf("\033[1;1H\033[2J"); // clear the screen

        tile_t(*level)[6][6] = selected_level->level_data; // get the level data from the selected level
        int position[2];                                  // array of the current position
        memcpy(position, selected_level->starting_position, sizeof(position)); // copy the starting position to the current position

        int last_positions[selected_level->num_chains][2]; // array of the last positions of each chain
        initialize_last_positions(last_positions, selected_level->num_chains); // initialize the last positions array

        represent_level(*level, position); // display the level
        while (!is_finished(*level))      // loop until the level is finished
        {
            display_info(*level, position, selected_level->level_number);
            push_previous_move(position[0], position[1], previous_moves, &previous_moves_index); // save the previous move in history
            ask_input(level, position, last_positions, selected_level->starting_position, previous_moves, &previous_moves_index);
            printf("\033[1;1H\033[2J"); // clear the screen
            represent_level(*level, position);
        }
        previous_moves_index = 0; // reset the previous moves index
        printf("Congratulations! You finished level %zu!\n", level_number);
    }

    return 0;
}

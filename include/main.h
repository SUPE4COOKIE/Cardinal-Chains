#ifndef MAIN_H
#define MAIN_H
#include "game.h"
#include <stdlib.h>

// declaration of functions prototypes
void initialize_last_positions(int last_positions[][2], size_t num_chains);
void push_previous_move(int x, int y, Position *previous_moves, int *previous_moves_count);
void represent_level(tile_t level[6][6], int *position);
int is_finished(tile_t level[6][6]);
int display_info(tile_t level[6][6], int *position, size_t level_number);
void ask_input(tile_t(*level)[6][6], int *position, int last_positions[][2], int starting_position[2], Position *previous_moves, int *previous_moves_count);


#endif // MAIN_H
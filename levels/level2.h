#ifndef LEVEL2_H
#define LEVEL2_H
#include "../include/game.h"

tile_t LEVEL_2[6][6] = {
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_2_STARTING_POSITION \
    {                             \
        1, 1                      \
    }
#define LEVEL_2_NUM_CHAINS 1

#endif // LEVEL2_H
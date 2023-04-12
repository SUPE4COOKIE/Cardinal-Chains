#ifndef LEVEL3_H
#define LEVEL3_H
#include "../include/game.h"

tile_t LEVEL_3[6][6] = {
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {0}, {.data = {0, 2}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_3_STARTING_POSITION \
    {                             \
        1, 1                      \
    }
#define LEVEL_3_NUM_CHAINS 2

#endif // LEVEL3_H
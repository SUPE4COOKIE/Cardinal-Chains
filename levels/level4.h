#ifndef LEVEL4_H
#define LEVEL4_H
#include "../include/game.h"

tile_t LEVEL_4[6][6] = {
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {0}, {.data = {0, 2}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_4_STARTING_POSITION \
    {                             \
        1, 1                      \
    }
#define LEVEL_4_NUM_CHAINS 2

#endif // LEVEL4_H
#ifndef LEVEL5_H
#define LEVEL5_H
#include "../include/game.h"

tile_t LEVEL_5[6][6] = {
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {0}, {.data = {0, 2}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {3, 0}}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_5_STARTING_POSITION \
    {                             \
        1, 1                      \
    }
#define LEVEL_5_NUM_CHAINS 2

#endif // LEVEL5_H
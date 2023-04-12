#ifndef LEVEL9_H
#define LEVEL9_H
#include "../include/game.h"

tile_t LEVEL_9[6][6] = {
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {0}, {.data = {0, 2}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {0}},
    {{0}, {0}, {0}, {0}, {.data = {2, 0}}, {.data = {3, 0}}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_9_STARTING_POSITION \
    {                             \
        1, 1                      \
    }
#define LEVEL_9_NUM_CHAINS 2

#endif // LEVEL9_H

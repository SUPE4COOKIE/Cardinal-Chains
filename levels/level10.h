#ifndef LEVEL10_H
#define LEVEL10_H

#include "../include/game.h"

tile_t LEVEL_10[6][6] = {
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {.data = {0, 2}}, {.data = {0, 3}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {.data = {1, 0}}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {0}},
    {{0}, {0}, {0}, {.data = {3, 0}}, {.data = {2, 0}}, {.data = {3, 0}}},
    {{0}, {0}, {0}, {0}, {0}, {0}}}
;

#define LEVEL_10_STARTING_POSITION \
    {                               \
        1, 1                        \
    }
#define LEVEL_10_NUM_CHAINS 3

#endif // LEVEL10_H

#ifndef LEVEL21_H
#define LEVEL21_H

#include "../include/game.h"

tile_t LEVEL_21[6][6] = {
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {3, 0}}, {.data = {3, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {0, 2}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {0, 1}}, {.data = {2, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {3, 0}}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_21_STARTING_POSITION \
    {                              \
    1, 2                          \
    }
#define LEVEL_21_NUM_CHAINS 2

#endif // LEVEL21_H

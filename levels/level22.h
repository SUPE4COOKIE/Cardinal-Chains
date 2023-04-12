#ifndef LEVEL22_H
#define LEVEL22_H

#include "../include/game.h"

tile_t LEVEL_22[6][6] = {
    {{.data = {0, 3}}, {.data = {1, 0}}, {.data = {0, 2}}, {.data = {2, 0}}, {.data = {2, 0}}, {0}},
    {{.data = {1, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {0, 1}}, {0}},
    {{.data = {1, 0}}, {0}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_22_STARTING_POSITION \
    {                              \
    4, 1                       \
    }
#define LEVEL_22_NUM_CHAINS 3

#endif // LEVEL22_H

#ifndef LEVEL28_H
#define LEVEL28_H

#include "../include/game.h"

tile_t LEVEL_28[6][6] = {
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {0, 3}}, {.data = {1, 0}}, {.data = {0, 1}}, {0}},
    {{.data = {1, 0}}, {0}, {.data = {8, 0}}, {0}, {.data = {1, 0}}, {0}},
    {{.data = {0, 2}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {0, 4}}, {.data = {1, 0}}, {0}},
};

#define LEVEL_28_STARTING_POSITION \
    {                              \
    4, 0                       \
    }
#define LEVEL_28_NUM_CHAINS 4

#endif // LEVEL28_H

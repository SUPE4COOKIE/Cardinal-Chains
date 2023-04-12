#ifndef LEVEL15_H
#define LEVEL15_H

#include "../include/game.h"

tile_t LEVEL_15[6][6] = {
    {{.data = {0, 2}}, {.data = {1, 0}}, {0}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {0, 1}}, {.data = {1, 0}}, {0}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_15_STARTING_POSITION \
    {                              \
    1, 2                            \
    }
#define LEVEL_15_NUM_CHAINS 2

#endif // LEVEL15_H

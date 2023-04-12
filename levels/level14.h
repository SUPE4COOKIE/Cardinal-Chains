#ifndef LEVEL14_H
#define LEVEL14_H

#include "../include/game.h"

tile_t LEVEL_14[6][6] = {
    {{.data = {4, 0}}, {.data = {4, 0}}, {.data = {4, 0}}, {.data = {4, 0}}, {.data = {4, 0}}, {0}},
    {{.data = {4, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {4, 0}}, {0}},
    {{.data = {4, 0}}, {.data = {2, 0}}, {.data = {0, 1}}, {.data = {4, 0}}, {.data = {4, 0}}, {0}},
    {{.data = {4, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {4, 0}}, {.data = {4, 0}}, {0}},
    {{.data = {4, 0}}, {.data = {4, 0}}, {.data = {4, 0}}, {.data = {6, 0}}, {.data = {8, 0}}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_14_STARTING_POSITION \
    {                              \
    2, 2                       \
    }
#define LEVEL_14_NUM_CHAINS 1

#endif // LEVEL14_H

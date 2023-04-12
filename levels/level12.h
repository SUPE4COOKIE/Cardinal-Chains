#ifndef LEVEL12_H
#define LEVEL12_H

#include "../include/game.h"

tile_t LEVEL_12[6][6] = {
    {{.data = {3, 0}}, {.data = {0, 0}}, {.data = {0, 1}}, {0}, {0}, {0}},
    {{.data = {3, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {0}, {0}, {0}},
    {{.data = {3, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {0}, {0}, {0}},
    {{.data = {3, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_12_STARTING_POSITION \
    {                              \
    2, 0                       \
    }
#define LEVEL_12_NUM_CHAINS 1

#endif // LEVEL12_H

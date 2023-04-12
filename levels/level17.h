#ifndef LEVEL17_H
#define LEVEL17_H

#include "../include/game.h"

tile_t LEVEL_17[6][6] = {
    {{.data = {0, 1}}, {.data = {6, 0}}, {.data = {5, 0}}, {0}, {0}, {0}},
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {0}, {0}, {0}},
    {{.data = {4, 0}}, {.data = {3, 0}}, {.data = {0, 2}}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_17_STARTING_POSITION \
    {                              \
    0, 0                           \
    }
#define LEVEL_17_NUM_CHAINS 2

#endif // LEVEL17_H

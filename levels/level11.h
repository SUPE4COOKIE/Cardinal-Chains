#ifndef LEVEL11_H
#define LEVEL11_H

#include "../include/game.h"

tile_t LEVEL_11[6][6] = {
    {{.data = {0, 1}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {3, 0}}, {0}, {0}},
    {{.data = {5, 0}}, {.data = {5, 0}}, {.data = {4, 0}}, {.data = {3, 0}}, {0}, {0}},
    {{.data = {5, 0}}, {.data = {0, 2}}, {.data = {1, 0}}, {.data = {2, 0}}, {0}, {0}},
    {{.data = {5, 0}}, {.data = {6, 0}}, {.data = {0, 3}}, {.data = {4, 0}}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_11_STARTING_POSITION \
    {                              \
    0, 0                       \
    }
#define LEVEL_11_NUM_CHAINS 3

#endif // LEVEL11_H

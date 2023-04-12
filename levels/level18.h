#ifndef LEVEL18_H
#define LEVEL18_H

#include "../include/game.h"

tile_t LEVEL_18[6][6] = {
    {{0}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {3, 0}}, {0}, {0}},
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {0, 2}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {0, 1}}, {.data = {2, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {0, 3}}, {.data = {3, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {0, 4}}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_18_STARTING_POSITION \
    {                              \
    2, 2                           \
    }
#define LEVEL_18_NUM_CHAINS 4

#endif // LEVEL18_H

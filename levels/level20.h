#ifndef LEVEL20_H
#define LEVEL20_H

#include "../include/game.h"

tile_t LEVEL_20[6][6] = {
    {{0}, {0}, {.data = {0, 4}}, {0}, {.data = {2, 0}}, {0}},
    {{.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {2, 0}}, {0}},
    {{.data = {0, 3}}, {.data = {3, 0}}, {.data = {3, 0}}, {.data = {3, 0}}, {.data = {0, 2}}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {0}},
    {{0}, {0}, {.data = {0, 1}}, {0}, {.data = {4, 0}}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_20_STARTING_POSITION \
    {                              \
    2, 4                           \
    }
#define LEVEL_20_NUM_CHAINS 4

#endif // LEVEL20_H

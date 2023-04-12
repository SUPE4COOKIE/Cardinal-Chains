#ifndef LEVEL29_H
#define LEVEL29_H

#include "../include/game.h"

tile_t LEVEL_29[6][6] = {
    {{.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {3, 0}}, {.data = {1, 0}}, {.data = {0, 3}}, {.data = {1, 0}}, {0}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {0, 2}}, {.data = {3, 0}}, {0}, {0}},
    {{.data = {0, 1}}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {2, 0}}, {0}, {0}},
    {{.data = {4, 0}}, {.data = {2, 0}}, {.data = {3, 0}}, {.data = {0, 4}}, {0}, {0}}};

#define LEVEL_29_STARTING_POSITION \
    {                              \
    0, 3                       \
    }
#define LEVEL_29_NUM_CHAINS 4

#endif // LEVEL29_H

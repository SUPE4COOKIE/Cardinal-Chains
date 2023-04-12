#ifndef LEVEL6_H
#define LEVEL6_H
#include "../include/game.h"

tile_t LEVEL_6[6][6] = {
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {0}, {.data = {0, 2}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {2, 0}}, {.data = {3, 0}}},
    {{0}, {.data = {2, 0}}, {.data = {3, 0}}, {.data = {4, 0}}, {0}, {.data = {3, 0}}}};

#define LEVEL_6_STARTING_POSITION \
    {                             \
        1, 1                      \
    }
#define LEVEL_6_NUM_CHAINS 2

#endif // LEVEL6_H
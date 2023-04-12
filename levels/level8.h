#ifndef LEVEL8_H
#define LEVEL8_H

#include "../include/game.h"

tile_t LEVEL_8[6][6] = {
     {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {0}, {.data = {0, 2}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {2, 0}}, {.data = {3, 0}}},
    {{0}, {.data = {2, 0}}, {.data = {3, 0}}, {.data = {4, 0}}, {0}, {.data = {3, 0}}}};

#define LEVEL_8_STARTING_POSITION \
    {                             \
        1, 1                      \
    }
#define LEVEL_8_NUM_CHAINS 2

#endif // LEVEL8_H

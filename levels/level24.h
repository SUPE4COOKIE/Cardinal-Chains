#ifndef LEVEL24_H
#define LEVEL24_H

#include "../include/game.h"

tile_t LEVEL_24[6][6] = {
    {{.data = {0, 3}}, {0}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}},
    {{.data = {1, 0}}, {0}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}},
    {{.data = {1, 0}}, {.data = {3, 0}}, {.data = {0, 1}}, {.data = {0, 4}}, {.data = {3, 0}}, {0}},
    {{.data = {1, 0}}, {.data = {2, 0}}, {0}, {.data = {0, 2}}, {.data = {2, 0}}, {0}},
    {{0}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {0}, {0}}};

#define LEVEL_24_STARTING_POSITION \
    {                              \
    2, 2                       \
    }
#define LEVEL_24_NUM_CHAINS 4

#endif // LEVEL24_H

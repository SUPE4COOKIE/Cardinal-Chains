#ifndef LEVEL16_H
#define LEVEL16_H

#include "../include/game.h"

tile_t LEVEL_16[6][6] = {
    {{0}, {.data = {0, 1}}, {.data = {1, 0}}, {0}, {0}, {0}},
    {{.data = {3, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {3, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {0, 2}}, {0}, {0}},
    {{.data = {2, 0}}, {.data = {3, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_16_STARTING_POSITION \
    {                              \
    1, 0                       \
    }
#define LEVEL_16_NUM_CHAINS 2

#endif // LEVEL16_H

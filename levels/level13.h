#ifndef LEVEL13_H
#define LEVEL13_H

#include "../include/game.h"

tile_t LEVEL_13[6][6] = {
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {4, 0}}, {0}},
    {{.data = {1, 0}}, {0}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {5, 0}}, {0}},
    {{.data = {1, 0}}, {.data = {0, 1}}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {3, 0}}, {0}},
    {{.data = {1, 0}}, {0}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {3, 0}}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_13_STARTING_POSITION \
    {                              \
    1, 2                         \
    }
#define LEVEL_13_NUM_CHAINS 1

#endif // LEVEL13_H

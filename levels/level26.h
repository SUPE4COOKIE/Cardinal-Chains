#ifndef LEVEL26_H
#define LEVEL26_H

#include "../include/game.h"

tile_t LEVEL_26[6][6] = {
    {{.data = {3, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {6, 0}}},
    {{.data = {3, 0}}, {.data = {1, 0}}, {0}, {.data = {0, 3}}, {.data = {0, 5}}, {.data = {6, 0}}},
    {{.data = {1, 0}}, {.data = {0, 4}}, {0}, {.data = {1, 0}}, {.data = {4, 0}}, {.data = {0, 1}}},
    {{.data = {1, 0}}, {.data = {2, 0}}, {.data = {0, 2}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {5, 0}}},
};

#define LEVEL_26_STARTING_POSITION \
    {                              \
    5, 2                       \
    }
#define LEVEL_26_NUM_CHAINS 5

#endif // LEVEL26_H
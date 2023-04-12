#ifndef LEVEL27_H
#define LEVEL27_H

#include "../include/game.h"

tile_t LEVEL_27[6][6] = {
    {{0}, {.data = {3, 0}}, {.data = {2, 0}}, {.data = {3, 0}}, {0}, {0}},
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {0, 2}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {0, 1}}, {.data = {2, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {0, 3}}, {.data = {3, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {0, 4}}, {0}}
};

#define LEVEL_27_STARTING_POSITION \
    {                              \
    2, 2                       \
    }
#define LEVEL_27_NUM_CHAINS 4

#endif // LEVEL27_H

#ifndef LEVEL19_H
#define LEVEL19_H

#include "../include/game.h"

tile_t LEVEL_19[6][6] = {
    {{.data = {0, 2}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {1, 0}}, {.data = {0, 1}}, {.data = {0, 3}}, {.data = {1, 0}} , {0}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0 }}, {0}, {0}, {0}},
    {{.data = {1, 0}}, {0}, {.data = {1, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_19_STARTING_POSITION \
    {                              \
    1, 1                       \
    }
#define LEVEL_19_NUM_CHAINS 3

#endif // LEVEL19_H

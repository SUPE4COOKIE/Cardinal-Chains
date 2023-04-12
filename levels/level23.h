#ifndef LEVEL23_H
#define LEVEL23_H

#include "../include/game.h"

tile_t LEVEL_23[6][6] = {
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {0}, {0}},
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0}},
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {1, 0}}, {0}},
    {{.data = {0, 3}}, {.data = {3, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {0, 1}}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {0, 2}}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}};

#define LEVEL_23_STARTING_POSITION \
    {                              \
    4, 3                       \
    }
#define LEVEL_23_NUM_CHAINS 3

#endif // LEVEL23_H

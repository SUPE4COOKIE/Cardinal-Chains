#ifndef LEVEL25_H
#define LEVEL25_H

#include "../include/game.h"

tile_t LEVEL_25[6][6] = {
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {0, 4}}, {.data = {1, 0}}, {.data = {2, 0}}},
    {{.data = {0, 2}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {0, 1}}, {0}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {0}, {.data = {0, 3}}},
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}},
};

#define LEVEL_25_STARTING_POSITION \
    {                              \
    4, 1                       \
    }
#define LEVEL_25_NUM_CHAINS 4

#endif // LEVEL25_H

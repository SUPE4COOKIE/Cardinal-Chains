#ifndef LEVEL7_H
#define LEVEL7_H
#include "../include/game.h"

tile_t LEVEL_7[6][6] = {
    {{0}, {0}, {0}, {0}, {0}, {0}},
    {{0}, {.data = {0, 1}}, {0}, {0}, {.data = {0, 2}}, {0}},
    {{0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {.data = {1, 0}}, {.data = {2, 0}}, {0}, {.data = {1, 0}}, {0}},
    {{0}, {0}, {.data = {3, 0}}, {.data = {3, 0}}, {0}, {0}},
    {{0}, {0}, {0}, {0}, {0}, {0}}
};

#define LEVEL_7_STARTING_POSITION \
    {                             \
        1, 1                      \
    }
#define LEVEL_7_NUM_CHAINS 2

#endif // LEVEL7_H

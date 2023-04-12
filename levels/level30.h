#ifndef LEVEL30_H
#define LEVEL30_H
#include "../include/game.h"

tile_t LEVEL_30[6][6] = {
    {{.data = {1, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {0, 1}}, {.data = {3, 0}}, {.data = {4, 0}}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {3, 0}}, {.data = {2, 0}}, {.data = {0, 4}}},
    {{.data = {2, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {1, 0}}},
    {{.data = {2, 0}}, {.data = {3, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {.data = {0, 5}}},
    {{.data = {0, 2}}, {.data = {3, 0}}, {.data = {3, 0}}, {.data = {3, 0}}, {.data = {0, 3}}, {.data = {4, 0}}},
    {{.data = {1, 0}}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {2, 0}}, {.data = {3, 0}}, {.data = {3, 0}}}};

#define LEVEL_30_STARTING_POSITION \
    {                              \
    3, 0                       \
    }
#define LEVEL_30_NUM_CHAINS 5

#endif // LEVEL30_H

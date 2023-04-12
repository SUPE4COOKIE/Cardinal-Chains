#ifndef LEVEL1_H
#define LEVEL1_H
#include "../include/game.h"

tile_t LEVEL_1[6][6] = {
  { {0}, {0}, {0}, {0}, {0}, {0} },
  { {0}, {.data = {0, 1}}, {0}, {0}, {.data = {0, 2}}, {0} },
  { {0}, {.data = {1, 0}}, {0}, {0}, {.data = {1, 0}}, {0} },
  { {0}, {.data = {1, 0}}, {.data = {2, 0}}, {.data = {1, 0}}, {.data = {1, 0}}, {0} },
  { {0}, {0}, {0}, {0}, {0}, {0} },
  { {0}, {0}, {0}, {0}, {0}, {0} }
};

#define LEVEL_1_STARTING_POSITION {1,1}
#define LEVEL_1_NUM_CHAINS 2

#endif // LEVEL1_H
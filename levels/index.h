// This is the index file for the levels directory.
// It able the program to list all the levels in the directory.
// So that the program can load them.

#ifndef INDEX_H
#define INDEX_H

#include "level1.h"
#include "level2.h"
#include "level3.h"
#include "level4.h"
#include "level5.h"
#include "level6.h"
#include "level7.h"
#include "level8.h"
#include "level9.h"
#include "level10.h"
#include "level11.h"
#include "level12.h"
#include "level13.h"
#include "level14.h"
#include "level15.h"
#include "level16.h"
#include "level17.h"
#include "level18.h"
#include "level19.h"
#include "level20.h"
#include "level21.h"
#include "level22.h"
#include "level23.h"
#include "level24.h"
#include "level25.h"
#include "level26.h"
#include "level27.h"
#include "level28.h"
#include "level29.h"
#include "level30.h"

typedef struct
{
    size_t level_number;
    int starting_position[2];
    int num_chains;
    tile_t (*level_data)[6][6];
} level_info_t;

static level_info_t LEVELS[] = {
    {
        .level_number = 1,
        .starting_position = LEVEL_1_STARTING_POSITION,
        .num_chains = LEVEL_1_NUM_CHAINS,
        .level_data = &LEVEL_1,
    },
    {
        .level_number = 2,
        .starting_position = LEVEL_2_STARTING_POSITION,
        .num_chains = LEVEL_2_NUM_CHAINS,
        .level_data = &LEVEL_2,
    },
    {
        .level_number = 3,
        .starting_position = LEVEL_3_STARTING_POSITION,
        .num_chains = LEVEL_3_NUM_CHAINS,
        .level_data = &LEVEL_3,
    },
    {
        .level_number = 4,
        .starting_position = LEVEL_4_STARTING_POSITION,
        .num_chains = LEVEL_4_NUM_CHAINS,
        .level_data = &LEVEL_4,
    },
    {
        .level_number = 5,
        .starting_position = LEVEL_5_STARTING_POSITION,
        .num_chains = LEVEL_5_NUM_CHAINS,
        .level_data = &LEVEL_5,
    },
    {
        .level_number = 6,
        .starting_position = LEVEL_6_STARTING_POSITION,
        .num_chains = LEVEL_6_NUM_CHAINS,
        .level_data = &LEVEL_6,
    },
    {
        .level_number = 7,
        .starting_position = LEVEL_7_STARTING_POSITION,
        .num_chains = LEVEL_7_NUM_CHAINS,
        .level_data = &LEVEL_7,
    },
    {
        .level_number = 8,
        .starting_position = LEVEL_8_STARTING_POSITION,
        .num_chains = LEVEL_8_NUM_CHAINS,
        .level_data = &LEVEL_8,
    },
    {
        .level_number = 9,
        .starting_position = LEVEL_9_STARTING_POSITION,
        .num_chains = LEVEL_9_NUM_CHAINS,
        .level_data = &LEVEL_9,
    },
    {
        .level_number = 10,
        .starting_position = LEVEL_10_STARTING_POSITION,
        .num_chains = LEVEL_10_NUM_CHAINS,
        .level_data = &LEVEL_10,
    },
    {
        .level_number = 11,
        .starting_position = LEVEL_11_STARTING_POSITION,
        .num_chains = LEVEL_11_NUM_CHAINS,
        .level_data = &LEVEL_11,
    },
    {
        .level_number = 12,
        .starting_position = LEVEL_12_STARTING_POSITION,
        .num_chains = LEVEL_12_NUM_CHAINS,
        .level_data = &LEVEL_12,
    },
    {
        .level_number = 13,
        .starting_position = LEVEL_13_STARTING_POSITION,
        .num_chains = LEVEL_13_NUM_CHAINS,
        .level_data = &LEVEL_13,
    },
    {
        .level_number = 14,
        .starting_position = LEVEL_14_STARTING_POSITION,
        .num_chains = LEVEL_14_NUM_CHAINS,
        .level_data = &LEVEL_14,
    },
    {
        .level_number = 15,
        .starting_position = LEVEL_15_STARTING_POSITION,
        .num_chains = LEVEL_15_NUM_CHAINS,
        .level_data = &LEVEL_15,
    },
    {
        .level_number = 16,
        .starting_position = LEVEL_16_STARTING_POSITION,
        .num_chains = LEVEL_16_NUM_CHAINS,
        .level_data = &LEVEL_16,
    },
    {
        .level_number = 17,
        .starting_position = LEVEL_17_STARTING_POSITION,
        .num_chains = LEVEL_17_NUM_CHAINS,
        .level_data = &LEVEL_17,
    },
    {
        .level_number = 18,
        .starting_position = LEVEL_18_STARTING_POSITION,
        .num_chains = LEVEL_18_NUM_CHAINS,
        .level_data = &LEVEL_18,
    },
    {
        .level_number = 19,
        .starting_position = LEVEL_19_STARTING_POSITION,
        .num_chains = LEVEL_19_NUM_CHAINS,
        .level_data = &LEVEL_19,
    },
    {
        .level_number = 20,
        .starting_position = LEVEL_20_STARTING_POSITION,
        .num_chains = LEVEL_20_NUM_CHAINS,
        .level_data = &LEVEL_20,
    },
    {
        .level_number = 21,
        .starting_position = LEVEL_21_STARTING_POSITION,
        .num_chains = LEVEL_21_NUM_CHAINS,
        .level_data = &LEVEL_21,
    },
    {
        .level_number = 22,
        .starting_position = LEVEL_22_STARTING_POSITION,
        .num_chains = LEVEL_22_NUM_CHAINS,
        .level_data = &LEVEL_22,
    },
    {
        .level_number = 23,
        .starting_position = LEVEL_23_STARTING_POSITION,
        .num_chains = LEVEL_23_NUM_CHAINS,
        .level_data = &LEVEL_23,
    },
    {
        .level_number = 24,
        .starting_position = LEVEL_24_STARTING_POSITION,
        .num_chains = LEVEL_24_NUM_CHAINS,
        .level_data = &LEVEL_24,
    },
    {
        .level_number = 25,
        .starting_position = LEVEL_25_STARTING_POSITION,
        .num_chains = LEVEL_25_NUM_CHAINS,
        .level_data = &LEVEL_25,
    },
    {
        .level_number = 26,
        .starting_position = LEVEL_26_STARTING_POSITION,
        .num_chains = LEVEL_26_NUM_CHAINS,
        .level_data = &LEVEL_26,
    },
    {
        .level_number = 27,
        .starting_position = LEVEL_27_STARTING_POSITION,
        .num_chains = LEVEL_27_NUM_CHAINS,
        .level_data = &LEVEL_27,
    },
    {
        .level_number = 28,
        .starting_position = LEVEL_28_STARTING_POSITION,
        .num_chains = LEVEL_28_NUM_CHAINS,
        .level_data = &LEVEL_28,
    },
    {
        .level_number = 29,
        .starting_position = LEVEL_29_STARTING_POSITION,
        .num_chains = LEVEL_29_NUM_CHAINS,
        .level_data = &LEVEL_29,
    },
    {
        .level_number = 30,
        .starting_position = LEVEL_30_STARTING_POSITION,
        .num_chains = LEVEL_30_NUM_CHAINS,
        .level_data = &LEVEL_30,
    },
    
    // Add more levels here
};

#endif // INDEX_H

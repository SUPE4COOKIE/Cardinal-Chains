# Cardinal Chains Technical documentation

## Project Structure
* cardinal_chains
  * doc
  * include
  * levels
  * src
  * MakeFile
  * README .md

***doc*** folder contain the user and technical documentation
***include*** folder contain all the header files included in the ***src*** folder
***levels*** folder contain all the levels data in header files
***src*** folder contain all the c 

## Detailed files roles

- doc/
  - Technical_doc.md
  - User_doc.md
- include/
  - colors.h
  - game.h
  - main.h
  - platform.h
- levels/
  - index.h
  - (omitted for brevity)
- src/
  - game.c
  - main.c
 - Makefile
- README. md


***colors.h*** contain all color related definitions and multiple color array to be able to itterate through it
***game.h*** contain the tile_t, MoveDirection Enum, the Position struct and all the keys to make game actions
***main.h*** declaration of functions prototypes 
***platform.h*** only use is to enable the use of ANSI escape codes on windows.

***index.h*** contain all the levels.h data into an array of a level_info_t struct 

***game.c*** contains all the function needed to make the game work
***main.c*** manage game loop and initialize variables to get info on the level

***Makefile*** File used by `make` to be able to build the project easily
***README. md*** root of the documentation

## Adding new levels

a level in this project is represented by a 6x6 array of tile_t struct in a .h in the levels directory:
you must init it with only `{0}` to begin with since that will create a 6x6 empty board

then to create a starting point replace one of the `{0}` by `{.data  = {0,  1}}`
a `data.tile_number` equal to 0 represent the start of a chain
and the second number represent the id of the chain (`data.owner`)

afterward to create the regular tiles you'll need to replace the `{0}` with something like that : 
`{.data  = {1,  0}}`

the first number is `data.tile_number` and represent the number you'll see on the board
the second one must always be zero since it's representing the ownership of the tile and we don't want to start the level with already owned tiles.

then define the constant LEVEL_`number`_STARTING_POSITION for initial position
and the LEVEL_`number`_NUM_CHAINS for the number of chain you've implemented

finally add your level in the index.h file by including it and adding it in the LEVEL array by creating a new level_info_t struct with your level data at the end of it.

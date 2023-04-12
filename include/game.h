#ifndef GAME_H
#define GAME_H
#define MAX_MOVES 100 // max number of moves to save in history

typedef union
{
  int exists; // if 0 empty tile
  struct
  {
    int tile_number; // number displayed on the tile
    int owner; // chain that own the tile
  } data;
} tile_t;


typedef enum
{
  MOVE_UP,
  MOVE_DOWN,
  MOVE_LEFT,
  MOVE_RIGHT
} MoveDirection;

typedef struct
{
  int x;
  int y;
} Position; // position of a tile (used for history)

#define KEY_MOVE_UP 'w'
#define KEY_MOVE_DOWN 's'
#define KEY_MOVE_LEFT 'a'
#define KEY_MOVE_RIGHT 'd'
#define KEY_CHANGE_CHAIN 'c'
#define KEY_ERASE_CHAIN 'e'
#define KEY_RESTART_LEVEL 'r'
#define KEY_UNDO 'q'
#define KEY_QUIT 't'

#endif // GAME_H
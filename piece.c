#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// １手において、使用される８方向の最大数
#define MAXIMUM_NUMBER_OF_DIRECTIONS_DUE_TO_POSITIONAL_MOVEMENT 2

#define NUMBER_OF_DIRECTIONS 8

typedef enum Direction
{
    UP = 0,
    UP_LEFT = 1,
    LEFT = 2,
    DOWN_LEFT = 3,
    DOWN = 4,
    DOWN_RIGHT = 5,
    RIGHT = 6,
    UP_RIGHT = 7,
}Direction;

typedef enum PieceName
{
    KING = 0,
    ROOK = 1,
    BICHOP = 2,
    GOLDGENERAL = 3,
    SILVERGENERAL = 4,
    KNIGHT = 5,
    LANCE = 6,
    PAWN = 7,
    PROMOTED_ROOK = 8,
    PROMOTED_BICHOP = 9,
    PROMOTED_SILVERGENERAL = 10,
    PROMOTED_KNIGHT = 11,
    PROMOTED_LANCE = 12,
    PROMOTED_PAWN = 13,
}PieceName;

typedef enum Promote
{
    PROMOTED = true,
    NOTPROMOTED = false,
}Promote;

typedef enum Turn
{
    FIRST = true,
    SECOND = false,
}Turn;

typedef struct ADirectionMove
{
    Direction direction;
    int maxLength;
}ADirectionMove;

typedef struct WayOfMove
{
    ADirectionMove adirectionMove[MAXIMUM_NUMBER_OF_DIRECTIONS_DUE_TO_POSITIONAL_MOVEMENT];
}WayOfMove;

typedef struct Piece
{
    PieceName name;
    Promote promote;
    WayOfMove wayOfMove[NUMBER_OF_DIRECTIONS];
}Piece;

typedef struct Apiece
{
    Piece piece;
    int index;
    Turn turn;
}Apiece;

Piece generatePiece()
{
    
}
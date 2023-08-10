#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "piece.c"

#define NUMBER_OF_EDGE 9
#define NUMBER_OF_SQUARES 81

typedef enum SquareStatus
{
    NOT_USED = false,
    USED = true,
}SquareStatus;

typedef struct Address
{
    int row;
    int column;
}Address;

typedef struct Square
{
    Address address;
    SquareStatus isUsed;
    Piece piece;
}Square;

typedef struct Board
{
    Square squares[NUMBER_OF_SQUARES];
}Board;

typedef struct Condition
{
    Board board;
    Turn turn;
    int turnNumber;
}Condition;

typedef struct Move
{
    Address address;
    Piece piece;
}Move;
#include <stdlib.h>
#include <limits.h>

// define what each of the spaces represent
#define BLACK 0
#define WHITE 1
#define EMPTY 2

// define the board dimensions (even though they should never change)
#define BOARD_WIDTH 8
#define BOARD_HEIGHT 8
#define BOARD_SIZE BOARD_WIDTH * BOARD_HEIGHT

#define ASCII_WIDTH 7
#define ASCII_HEIGHT 4

// settings to be changed
int debug = 0;
int pruning = 0;
int depth = 2;


// create (and setup) a board (an array of 64 integers) 
int* createBoard(){
    int* result = (int*) malloc(sizeof(int) * BOARD_SIZE);
    // initialize the board to empty
    for (int i=0; i<BOARD_SIZE; i++){
        result[i] = EMPTY;
    }

    // put the 2 black and 2 white pieces in the center
    int heightMiddle = (BOARD_HEIGHT >> 1) - 1;
    int widthMiddle = (BOARD_WIDTH >> 1) - 1;
    result[heightMiddle * BOARD_WIDTH + widthMiddle] = WHITE;
    result[heightMiddle * BOARD_WIDTH + widthMiddle + 1] = BLACK;
    result[(heightMiddle + 1) * BOARD_WIDTH + widthMiddle] = BLACK;
    result[(heightMiddle + 1) * BOARD_WIDTH + widthMiddle + 1] = WHITE;

    return result;
}

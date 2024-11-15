#pragma once

#define SIZE_OF_SIDE 3 * 3
#define SIZE_OF_CUBE SIZE_OF_SIDE * 6

#define MAPPING_TOP   0
#define MAPPING_LEFT  MAPPING_TOP   + SIZE_OF_SIDE
#define MAPPING_FRONT MAPPING_LEFT  + SIZE_OF_SIDE
#define MAPPING_RIGHT MAPPING_FRONT + SIZE_OF_SIDE
#define MAPPING_BACK  MAPPING_RIGHT + SIZE_OF_SIDE
#define MAPPING_DOWN  MAPPING_BACK  + SIZE_OF_SIDE



int main(int, char**);
void drawCube(int *);
void resetColor();
void setColor(int n);
void drawCube__(int *); /* Why __ but not remove? */
void resetCube(int *);


#define w 1
#define o 2
#define g 4
#define r 8
#define b 16
#define y 32
#define FLIPPED 64

#define wg 1
#define wr 2
#define wb 4
#define wo 8

#define gr 16
#define go 32
#define ob 64
#define br 128 

#define yg 256
#define yo 512
#define yb 1024
#define yr 2048



/* 
wogrby
111111

wg 1 + 4 = 5 (10100)

 */
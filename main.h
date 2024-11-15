#pragma once

#define SIZE_OF_SIDE 3 * 3
#define SIZE_OF_CUBE SIZE_OF_SIDE * 6

#define MAPPING_TOP   0
#define MAPPING_LEFT  MAPPING_TOP   + SIZE_OF_SIDE
#define MAPPING_FRONT MAPPING_LEFT  + SIZE_OF_SIDE
#define MAPPING_RIGHT MAPPING_FRONT + SIZE_OF_SIDE
#define MAPPING_BACK  MAPPING_RIGHT + SIZE_OF_SIDE
#define MAPPING_BOTTOM  MAPPING_BACK  + SIZE_OF_SIDE

#define XDDEBUG 0

#define L 0
#define R 1
#define F 2
#define B 3
#define U 4
#define D 5

int main(int, char**);
void drawCube(int *);
void resetColor();
void setColor(int n);
void drawCube__(int *); /* Why __ but not remove? */
void resetCube(int *);
void rotateSide(int, int*, int*);
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include <math.h>

#define width 65
#define height 25

typedef struct {
	int x, y;
	int w; // ширина ракетки 
} TRacket;

typedef struct
{
	float x, y; //так как шарик перемещается в зависимости от угла, по этому флоат 
	int ix, iy;
	float alfa;
	float speed;
} TBall;

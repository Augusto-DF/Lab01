#include <iostream>
#include "perimeter.h"
#define PI 3.14

int perim_triangle(int base){
	return base*3;
}

int perim_rectangle(int width, int heigth){
	return (width*2 + heigth*2);
}

int perim_squire(int side){
	return side*4;
}

float perim_circle(int r){
	return 2*PI*r;
}
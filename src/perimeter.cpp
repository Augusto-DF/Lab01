#include <iostream>
#include "perimeter.h"
#define PI 3.14

int perim_triangle(int side1, int side2, int side3){
	return side1 + side2 +side3;
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
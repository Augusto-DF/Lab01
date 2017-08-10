#include <iostream>
#define PI 3.14

int area_triangle(int width, int heigth){
	return (width*heigth)/2;
}

int area_rectangle(int width, int heigth){
	return width*heigth;
}

int area_squire(int side){
	return side*4;
}

float area_circle(int r){
	return PI*(r*r);
}
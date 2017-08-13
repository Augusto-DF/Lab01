#include <iostream>
#include "volume.h"
#define PI 3.14

float vol_pyramid(int base_area, int heigth){
	return 1/3*(base_area*heigth);
}

float vol_cube(int edge){
	return (edge*edge*edge);
}

float vol_parallelepiped(int edge1, int edge2, int edge3){
	return edge1*edge2*edge3;
}
float vol_sphere(int r){
	return 4/3*PI*(r*r*r);
}
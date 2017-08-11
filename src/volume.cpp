#include <iostream>
#include "volume.h"
#define PI 3.14

float vol_pyramid(float base_area, float heigth){
	return 1/3*(base_area*heigth);
}

float vol_cube(float edge){
	return (edge*edge*edge);
}

float vol_parallelepiped(float edge1, float edge2, float edge3){
	return edge1*edge2*edge3;
}
float vol_sphere(float r){
	return 4/3*PI*(r*r*r);
}
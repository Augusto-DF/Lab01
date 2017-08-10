#include <iostream>
#define PI 3.14

float vol_pyramid(float area_base, float heigth){
	return 1/3*(area_base*heigth);
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
#include <iostream>
#define PI 3.14

int area_pyramid(int lateral_area, int base_area){
	return base_area + lateral_area;
}

int area_cube(int edge){
	return 6*(edge * edge);
}

int area_parallelepiped(int edge1, int edge2, int edge3){
	return (2*(edge1 * edge2)) + (2*(edge1*edge3))+(2*(edge2*edge3));
}

float area_sphere(int r){
	return 4*PI*(r*r);
}
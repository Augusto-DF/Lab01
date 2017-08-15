/**
 * @file	area.cpp
 * @brief	Codigo fonte das funcoes que calculam a area de figuras geometricas planas e espaciais
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date 14/08/2017
 */

#include "area.h"

/**
 * @brief Calcula a area de um triangulo
 * @return Area do triangulo
 */
int area_triangle(int width, int heigth){
	return (width*heigth)/2;
}

/**
 * @brief Calcula a area de um retangulo
 * @return Area do retangulo
 */
int area_rectangle(int width, int heigth){
	return width*heigth;
}

/**
 * @brief Calcula a area de um quadrado
 * @return Area do quadrado
 */
int area_squire(int side){
	return side*4;
}

/**
 * @brief Calcula a area de um circulo
 * @return Area do circulo
 */
float area_circle(int r){
	return PI*(r*r);
}

/**
 * @brief Calcula a area de uma piramide
 * @return Area da piramide
 */
int area_pyramid(int lateral_area, int base_area){
	return base_area + lateral_area;
}

/**
 * @brief Calcula a area de um cubo
 * @return Area do cubo
 */
int area_cube(int edge){
	return 6*(edge * edge);
}

/**
 * @brief Calcula a area de um paralelepipedo
 * @return Area do paralelepipedo
 */
int area_parallelepiped(int edge1, int edge2, int edge3){
	return (2*(edge1 * edge2)) + (2*(edge1*edge3))+(2*(edge2*edge3));
}

/**
 * @brief Calcula a area de uma superficie esferica
 * @return Area da superficie esferica
 */
float area_sphere(int r){
	return 4*PI*(r*r);
}
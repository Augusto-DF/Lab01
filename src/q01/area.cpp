/**
 * @file	area.cpp
 * @brief	Codigo fonte das funcoes que calculam a area de figuras geometricas planas e espaciais
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date 14/08/2017
 */

#include "area.h"

/**
 * @brief Calcula a area de um triangulo
 * @param base Tamanho da base do triangulo
 * @param heigth Tamanho da altura do triangulo
 * @return Area do triangulo
 */
int area_triangle(int base, int heigth){
	return (base*heigth)/2;
}

/**
 * @brief Calcula a area de um retangulo
 * @param width Tamanho da base do retangulo
 * @param heigth Tamanho da altura do retangulo
 * @return Area do retangulo
 */
int area_rectangle(int width, int heigth){
	return width*heigth;
}

/**
 * @brief Calcula a area de um quadrado
 * @param width Tamanho da base do quadrado
 * @param heigth Tamanho da altura do quadrado
 * @return Area do quadrado
 */
int area_squire(int side){
	return side*4;
}

/**
 * @brief Calcula a area de um circulo
 * @param r raio do circulo
 * @return Area do circulo
 */
float area_circle(int r){
	return PI*(r*r);
}

/**
 * @brief Calcula a area de uma piramide
 * @param lateral_area Area lateral da piramide
 * @param base_area Area da base da piramide
 * @return Area da piramide
 */
int area_pyramid(int lateral_area, int base_area){
	return base_area + lateral_area;
}

/**
 * @brief Calcula a area de um cubo
 * @param edge Tamanho da aresta do cubo
 * @return Area do cubo
 */
int area_cube(int edge){
	return 6*(edge * edge);
}

/**
 * @brief Calcula a area de um paralelepipedo
 * @param edge1 Tamanho da primeira aresta do paralelepipedo
 * @param edge2 Tamanho da segunda aresta do paralelepipedo
 * @param edge3 Tamanho da terceira aresta do paralelepipedo
 * @return Area do paralelepipedo
 */
int area_parallelepiped(int edge1, int edge2, int edge3){
	return (2*(edge1 * edge2)) + (2*(edge1*edge3))+(2*(edge2*edge3));
}

/**
 * @brief Calcula a area de uma superficie esferica
 * @param r raio da esfera
 * @return Area da superficie esferica
 */
float area_sphere(int r){
	return 4*PI*(r*r);
}
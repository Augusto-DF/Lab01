/**
 * @file	area.h
 * @brief	Declaracao das assinaturas de funcao que calculam a area de figuras 
 * 		    geometricas planas e espaciais.
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	14/08/2017
 */

#ifndef AREA_H
#define AREA_H

/** @brief	Valor para a constante &pi */
#define PI 3.14

/**
 * @brief Calcula a area de um triangulo
 * @return Area do triangulo
 */
int area_triangle(int width, int heigth);

/**
 * @brief Calcula a area de um retangulo
 * @return Area do retangulo
 */
int area_rectangle(int width, int heigth);

/**
 * @brief Calcula a area de um quadrado
 * @return Area do quadrado
 */
int area_squire(int side);

/**
 * @brief Calcula a area de um circulo
 * @return Area do circulo
 */
float area_circle(int r);

/**
 * @brief Calcula a area de uma piramide
 * @return Area da piramide
 */
int area_pyramid(int lateral_area, int base_area);

/**
 * @brief Calcula a area de um cubo
 * @return Area do cubo
 */
int area_cube(int edge);

/**
 * @brief Calcula a area de um paralelepipedo
 * @return Area do paralelepipedo
 */
int area_parallelepiped(int edge1, int edge2, int edge3);

/**
 * @brief Calcula a area de uma superficie esferica
 * @return Area da superficie esferica
 */
float area_sphere(int r);

#endif
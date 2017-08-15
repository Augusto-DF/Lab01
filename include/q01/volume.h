/**
 * @file	volume.h
 * @brief	Declaracao das assinaturas de funcao que calculam o volume de figuras espaciais
 * @author	Mattheus Augusto Pinheiro de Oliveira	
 * @date	14/08/2017
*/
#ifndef VOLUME_H
#define VOLUME_H

#define PI 3.14

/** 
 * @brief Calcula o volume de uma piramide
 * @return Volume da piramide
 */
float vol_pyramid(int base_area, int heigth);

/**
 * @brief Calcula o volume de um cubo
 * @return Volume do cubo
 */
float vol_cube(int edge);

/**
 * @brief Calcula o volume de um paralelepipedo
 * @return Volume do paralelepipedo
 */
float vol_parallelepiped(int edge1, int edge2, int edge3);

/**
 * @brief Calcula o volume de uma esfera
 * @return Volume da esfera
 */
float vol_sphere(int r);

#endif
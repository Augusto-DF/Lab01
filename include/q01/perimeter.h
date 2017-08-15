/**
 * @file	perimetro.h
 * @brief	Declaracao das assinaturas de funcao que calculam o perimetro de figuras planas
 * @author	Mattheus Augusto Pinheiro de Oliveira	
 * @date	14/08/2017
*/
#ifndef PERIMETER_H
#define PERIMETER_H

#define PI 3.14

/** 
 * @brief Calcula o perimetro de um triangulo
 * @return Perimetro do triangulo
 */
int perim_triangle(int base);

/** 
 * @brief Calcula o perimetro de um retangulo
 * @return Perimetro do retangulo
 */
int perim_rectangle(int width, int heigth);

/** 
 * @brief Calcula o perimetro de um quadrado
 * @return Perimetro do quadrado
 */
int perim_squire(int side);

/** 
 * @brief Calcula o comprimento da circunferencia de um circulo
 * @return Comprimento da circunferencia do circulo
*/
float perim_circle(int r);

#endif
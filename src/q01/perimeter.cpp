/**
 * @file	perimetro.cpp
 * @brief	Codigo fonte com a implementacao de funcoes que calculam o perimetro de figuras planas
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	15/03/2017
 */

#include "perimeter.h"

/**
 * @brief Calcula o perimetro de um triangulo
 * @param base Tamanho da base do triangulo
 * @return Perimetro do triangulo
 */
int perim_triangle(int base){
	return base*3;
}

/** 
 * @brief Calcula o perimetro de um retangulo
 * @param width Largura do retangulo
 * @param heigth Altura do retangulo
 * @return Perimetro do retangulo
 */
int perim_rectangle(int width, int heigth){
	return (width*2 + heigth*2);
}

/** 
 * @brief Calcula o perimetro de um quadrado
 * @param side Lado do quadrado
 * @return Perimetro do quadrado
 */
int perim_squire(int side){
	return side*4;
}

/** 
 * @brief Calcula o comprimento da circunferencia de um circulo
 * @param r Raio do circulo
 * @return Comprimento da circunferencia do circulo
*/
float perim_circle(int r){
	return 2*PI*r;
}
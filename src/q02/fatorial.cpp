/**
 * @file	fatorial.cpp
 * @brief	Implementação da função para o calculo recursivo do fatorial
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	14/08/2017
*/

#include "fatorial.h"

/**
 * @brief	Definição de função que calcula o fatorial de n
 * @param	n Chave para o calculo do fatorial
 * @return	O fatorial do numero (Chave)
*/
int fat(int n){
	if((n==1)||(n==0)) return 1;

	else{
		return fat(n-1)*n;
	}
}
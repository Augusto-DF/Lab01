/**
 * @file	primalidade.h
 * @brief	Definição das funcoes que calculam o maior primo de um numero
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	14/08/2017
*/

#ifndef PRIMALIDADE_H
#define PRIMALIDADE_H

/**
 * @brief	Assinatura da funcao que diz se o numero e primo
 * @param	n Chave a ser verificada se é ou não é primo
 * @param	aux Contador
 * @return	True para um numero primo, False para um numero não primo
*/
bool eh_primo(int n, int aux);

/**
 * @brief	Assinatura da funcao que retorna o maior primo de um numero
 * @param	n Chave (numero)
 * @return	Maior primo anterior a chave (numero)
*/
int maior_p(int n);

#endif
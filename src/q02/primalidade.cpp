/**
 * @file	primalidade.cpp
 * @brief	Implementação das funcoes que calculam o maior primo de um numero
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	14/08/2017
*/

#include <iostream>

using std::cout;
using std::endl;

/**
 * @brief	Funcao que diz se o numero e primo
 * @param	n Chave a ser verificada se é ou não é primo
 * @param	aux Contador
 * @return	True para um numero primo, False para um numero não primo
*/
bool eh_primo(int n, int aux){
	int cont = 1;

	if(cont==1 && aux < 2){
		return true;
	}

	else if(aux >= 1){
		if(n%aux==0){
			
			cont++;
			
			if(cont > 1){ 
				return false;
			}
		}
		return eh_primo(n,aux-1);
	}
}

/**
 * @brief	Funcao que retorna o maior primo de um numero
 * @param	n Chave (numero)
 * @return	Maior primo anterior a chave (numero)
*/
int maior_p(int n){

	if(eh_primo(n,n-1) == true){
		return n;

	}else{
		return maior_p(n-1);
	}
}

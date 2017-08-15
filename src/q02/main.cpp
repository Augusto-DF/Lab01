/**
 * @file	main.cpp
 * @brief	Codigo fonte
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	14/08/2017
*/

#include <iostream>
#include "primalidade.h"
#include "fatorial.h"

using std::cout;
using std::cin;
using std::endl;

/**
 * @brief Funcao principal
*/
int main(){

	int key;

	std::cout << "Digite o valor do numero que deseja obter o fatorial: ";
	std::cin >> key;

	std::cout << "O maior numero primo anterior ao fatorial de " << key << "(" << fat(key) << ") é: " << maior_p(fat(key) -1) << endl; 

}
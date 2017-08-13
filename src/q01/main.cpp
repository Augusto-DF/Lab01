#include <iostream>
#include "calcula.h"

int main(){

	int choice = 0;

	std::cout << "Calculadora de Geometria Plana e Espacial\n(1) Triangulo equilatero\n(2) Retangulo\n(3) Quadrado\n(4) Circulo\n(5) Piramide com base quadrangular\n(6) Cubo\n(7) Paralelepipedo\n(8) Esfera\n(0) Sair\n\nDigite a sua opcao:";
	std::cin >> choice;

	while(choice != 0){
		while(choice > 8 || choice < 0){
			std::cout << "==VALOR INVÁLIDO==\nCalculadora de Geometria Plana e Espacial\n(1) Triangulo equilatero\n(2) Retangulo\n(3) Quadrado\n(4) Circulo\n(5) Piramide com base quadrangular\n(6) Cubo\n(7) Paralelepipedo\n(8) Esfera\n(0) Sair\n\nDigite a sua opcao:";
			std::cin >> choice;
		}
		std::cout << endl;
		calc(choice);
		std::cout << "Calculadora de Geometria Plana e Espacial\n(1) Triangulo equilatero\n(2) Retangulo\n(3) Quadrado\n(4) Circulo\n(5) Piramide com base quadrangular\n(6) Cubo\n(7) Paralelepipedo\n(8) Esfera\n(0) Sair\n\nDigite a sua opcao:";
		std::cin >> choice;
	}
	std::cout << "===PROGRAMA FINALIZADO===" << endl;
}
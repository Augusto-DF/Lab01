/**
 * @file	calcula.cpp
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	14/08/2017
 */

#include <iostream>
#include "calcula.h"

using std::cout;
using std::cin;
using std::endl;

/**
 * @brief	Função que pede os dados necessários para os calculos das figuras
 * @param	Chave referente a figura geometrica
*/
void calc(int key){

	if(key==1){ // Triangulo:
		int tbase, theigth;
		std::cout << "Digite o valor da altura e base, respectivamente, do trinagulo equilatero: " << endl;
		std::cout << "Altura: ";
		std::cin >> theigth;
		std::cout << "Base: ";
		std::cin >> tbase;

		std::cout << "O valor da área do triangulo equilatero é: " << area_triangle(tbase, theigth) << endl;
		std::cout << "O valor do perimetro do trinagulo equilatero é: " << perim_triangle(tbase) << endl; 
		std::cout << endl;
	}

	else if(key==2){ //Retangulo:
		int rwidth, rheigth;
		std::cout << "Digite o valor da altura e base, respectivamente, do retangulo: " << endl;
		std::cout << "Altura: ";
		std::cin >> rheigth;
		std::cout << "Base: ";
		std::cin >> rwidth;

		std::cout << "O valor da área do retangulo é: " << area_rectangle(rwidth, rheigth) << endl;
		std::cout << "O valor do perimetro do retangulo é: " << perim_rectangle(rwidth, rheigth) << endl;
		std::cout << endl;
	}

	else if(key==3){//Quadrado:
		int qedge;
		std::cout << "Digite o valor da aresta do quadrado: ";
		std::cin >> qedge;

		std::cout << "O valor da área do quadrado é: " << area_squire(qedge) << endl;
		std::cout << "O valor do perimetro do quadrado é: " << perim_squire(qedge) << endl;
		std::cout << endl;
	}

	else if(key==4){//Círculo
		int r;
		std::cout << "Digite o valor do raio do circulo: ";
		cin >> r;

		std::cout << "O valor da área do círculo é: " << area_circle(r) << endl;
		std::cout << "O comprimento do circulo é: " << perim_circle(r) << endl;
		std::cout << endl;
	}

	else if(key==5){//Pirâmide
		int pbarea_, pheigth, plarea_;

		std::cout << "Digite o valor da Área da base da pirâmide: ";
		std::cin >> pbarea_;
		std::cout << "Digite o valor da Área lateral da pirâmide: ";
		std::cin >> plarea_;
		std::cout << "Digite o valor da Altura da pirâmide: ";
		std::cin >> pheigth;

		std::cout << "O valor da área da pirâmide é: " << area_pyramid(plarea_, pbarea_) << endl;
		std::cout << "o valor do volume da pirâmide é: " << vol_pyramid(pbarea_, pheigth) << endl;
		std::cout << endl;

	}
	else if(key==6){//Cubo
		int cedge;

		std::cout << "Digite o valor da aresta: ";
		std::cin >> cedge;

		std::cout << "O valor da Área do cubo é: " << area_cube(cedge) << endl;
		std::cout << "O valor do Volume do cubo é: " << vol_cube(cedge) << endl;
		std::cout << endl;
	}

	else if(key==7){//Paralelepipedo
		int pedge1, pedge2, pedge3;

		std::cout << "Digite o valor da primeira aresta: ";
		std::cin >> pedge1;		
		std::cout << "Digite o valor da segunda aresta: ";
		std::cin >> pedge2;		
		std::cout << "Digite o valor da terceira aresta: ";
		std::cin >> pedge3;

		std::cout << "O valor da Área do paralelepipedo é: " << area_parallelepiped(pedge1, pedge2, pedge3) << endl;
		std::cout << "O valor do Volume do paralelepipedo é: " << vol_parallelepiped(pedge1, pedge2, pedge3) << endl;
		std::cout << endl;
	}

	else if(key==8){//Esfera
		int sr_;

		std::cout << "Digite o valor do Raio: ";
		std::cin >> sr_;

		std::cout << "O valor da Área da esfera é: " << area_sphere(sr_) << endl;
		std::cout << "O valor da Volume da esfera é: " << vol_sphere(sr_) << endl;
		std::cout << endl;
	}
}
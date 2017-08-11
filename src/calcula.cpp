#include <iostream>
#include "area.h"
#include "perimeter.h"
#include "volume.h"
#include "calcula.h"

using std::cout;
using std::cin;
using std::endl;

void calc(int key){

	/*
	(1) Triangulo equilatero	ok
	(2) retangulo				ok
	(3) Quadrado				ok
	(4) circulo 				ok
	(5) Piramide
	(6) Cubo
	(7) Paralelepipedo
	(8) Esfera
	(0) Sair
	*/

	if(key==1){ // Triangulo:
		int tbase, theigth;
		std::cout << "Digite o valor da altura e base, respectivamente, do trinagulo equilatero: " << endl;
		std::cout << "Altura: ";
		std::cin >> theigth;
		std::cout << "Base: ";
		std::cin >> tbase;

		std::cout << "O valor da área do triangulo equilatero é: " << area_triangle(tbase, theigth);
		std::cout << "O valor do perimetro do trinagulo equilatero é: " << perim_triangle(tbase); 
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
	}

	else if(key==3){//Quadrado:
		int qedge;
		std::cout << "Digite o valor da aresta do quadrado: ";
		std::cin >> qedge;

		std::cout << "O valor da área do quadrado é: " << area_squire(qedge) << endl;
		std::cout << "O valor do perimetro do quadrado é: " << perim_squire(qedge) << endl;
	}

	else if(key==4){//Círculo
		int r;
		std::cout << "Digite o valor do raio do circulo: ";
		cin >> r;

		std::cout << "O valor da área do círculo é: " << area_circle(r);
		std::cout << "O comprimento do circulo é: " << perim_circle(r);
	}
}
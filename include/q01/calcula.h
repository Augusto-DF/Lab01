/**
 * @file	calcula.h
 * @brief	Declaracao da assinatura de funcao que irá solicitar as entradas para o usuário
 * @author	Mattheus Augusto Pinheiro de Oliveira
 * @date	14/08/2017
 */
#ifndef CALCULA_H
#define CALCULA_H

#include <iostream>

#include "area.h"
#include "perimeter.h"
#include "volume.h"

using std::cout;
using std::cin;
using std::endl;

/**
 * @brief	Assinatura da funcao que irá solicitar as entradas para o usuário
 * @param	Chave referente a figura geometrica
 */
void calc(int key);

#endif
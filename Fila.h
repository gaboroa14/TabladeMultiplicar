/*
 * Fila.h
 *
 *  Created on: 13 jul. 2019
 *      Author: Gabriel
 */

#ifndef FILA_H_
#define FILA_H_
#include "Pila.cpp"

class Fila {
private:
	int identificador;

public:
	Pila<int> numeros;
	Fila(int id);
	Fila();
	int getId();
};

#endif /* FILA_H_ */

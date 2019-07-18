/*
 * Fila.cpp
 *
 *  Created on: 13 jul. 2019
 *      Author: Gabriel
 */

#include "Fila.h"

Fila::Fila(int id) {
	// TODO Auto-generated constructor stub
	identificador = id;
	for (int i=1;i<11;i++){
		numeros.Insertar(i);
	}
}

Fila::Fila() {
	// TODO Auto-generated constructor stub
}

int Fila::getId(){
	return identificador;
}

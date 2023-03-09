//
// Created by airam on 07/03/2023.
//

#ifndef AKARIPUZZLE_REGLASJUEGO_H
#define AKARIPUZZLE_REGLASJUEGO_H
#include "tablero.h"

bool estaTerminado(tTablero const& tab);
bool esPosQuit(int x, int y);
void ejecutarPos(tTablero& tab, int x, int y);

#endif //AKARIPUZZLE_REGLASJUEGO_H

//
// Created by airam on 07/03/2023.
//
#include <iostream>
#include "reglasJuego.h"
using namespace std;

bool estaTerminado(tTablero const& tab) {
    bool ok = true;
    for (int filas = 0; filas < tab.nFils; filas++) {
        for (int columnas = 0; columnas < tab.nCols; columnas++) {
                if (tab.tablero[filas][columnas].tipo != BOMBILLA ) {
                    ok = false;
                }
        }
    }
    return ok;
}

bool esPosQuit(int x, int y) {
    return (x == -1 && y == 0);

}
void ejecutarPos(tTablero& tab, int x, int y);

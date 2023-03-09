
#include <iostream>
#include <fstream>
#include "tablero.h"

using namespace std;

int getNumFilas(const tTablero& tab) {
    return tab.nFils;
}

int getNumCols(const tTablero& tab) {
    return tab.nCols;
}

tCelda celdaEnPos(const tTablero& tab, int x, int y) {
    return tab.tablero[x][y];
}

void ponCeldaEnPos(tTablero& tab, int x, int y, const tCelda& c) {
     tab.tablero[x][y] = c;
}
bool leerTablero(ifstream& archivo, tTablero& tab) {
    bool abre = false;
    char c;
    archivo.open("tablero.txt");
    if (archivo.is_open()) {
        abre = true;
        archivo >> tab.nFils >> tab.nCols;
        archivo >> c;
        for (int filas = 0; filas < tab.nFils; filas++) {
            for (int columnas = 0; columnas < tab.nCols; columnas++) {
                    tab.tablero [filas][columnas] = charToCelda(c);

            }
        }
}
    archivo.close();
    return abre;
}

void mostrarTablero(const tTablero& tab) {
    for (int filas = 0; filas < tab.nFils; filas++) {
        for (int columnas = 0; columnas < tab.nCols; columnas++)
            cout << celdaToChar(tab.tablero[filas][columnas]);
    }
}

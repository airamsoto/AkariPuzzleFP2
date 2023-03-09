
#ifndef AKARIPUZZLE_TABLERO_H
#define AKARIPUZZLE_TABLERO_H
#include "celda.h"
const int MAX_FILS = 10;
const int MAX_COLS = 10;
typedef struct {
    int nFils, nCols;
    tCelda tablero[MAX_FILS][MAX_COLS];
} tTablero;


int getNumFilas(const tTablero& tab);
int getNumCols(const tTablero& tab);
tCelda celdaEnPos(const tTablero& tab, int x, int y);
void ponCeldaEnPos(tTablero& tab, int x, int y, const tCelda& c);
bool leerTablero(ifstream& archivo, tTablero& tab);
void mostrarTablero(const tTablero& tab);

//Como alternativa a las dos últimas funciones puedes sobrecargar los operadores ‘>>’ y ‘<<’:
ifstream& operator>>(ifstream& archivo, tTablero& tab);
ostream& operator<<(ostream& out, const tTablero& tab);

#endif //AKARIPUZZLE_TABLERO_H

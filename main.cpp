#include <iostream>
#include <fstream>
using namespace std;


#include "tablero.h"

int main () {
    tTablero tab;
    ifstream archivo;
    leerTablero(archivo, tab);
    mostrarTablero(tab);
    return 0;
}


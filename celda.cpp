
#include "celda.h"

char celdaToChar(const tCelda& celda) {
    char aux;
    if (celda.tipo == BOMBILLA) {
        aux = '*';
    } else if (celda.tipo == PARED){
        aux = celda.numBombillas;
    } else {
        aux = ' '; //en cualquier otro caso devuelve un blanco
    }
    return aux;
}

tCelda charToCelda(char c) {
    tCelda celda;
    if (c == 'X') {
        celda.tipo = PARED;
    } else if (isdigit(c)) { //si c es un numero, funcion isdigit buscada en google
        celda.tipo = PARED;
        celda.numBombillas = c;
    } else if (c == '.') {
        celda.tipo = LIBRE;
    } else if (c == '*') {
        celda.tipo = BOMBILLA;
    }
}

bool esPared(const tCelda& c) {
    return c.tipo == PARED;
}
bool esParedRestringida(const tCelda& c) {
    bool ok = false;
    if (c.tipo == PARED && (c.numBombillas <= 4 && c.numBombillas >= 0) ) {
        ok = true;
    }
   return ok;
}

int numParedRestringida(const tCelda& c) {
    return c.numBombillas;
}

bool esBombilla(const tCelda& c) {
    return c.tipo == BOMBILLA;
}

bool estaApagada(const tCelda& c) {
    bool ok = false;
    if (c.tipo == LIBRE && c.numBombillas == 0) {
        ok = true;
    }
    return ok;
}
bool estaIluminada(const tCelda& c) {
    bool ok = false;
    if (c.tipo == LIBRE && c.numBombillas > 0) {
        ok = true;
    }
    return ok;
}
void apagaCelda(tCelda& c) {
    c.tipo = LIBRE;
    c.numBombillas = 0;
}

void actualizaIluminaciónCelda(tCelda& c, bool iluminar) { //no tengo claro lo que pide la funcion
    if (iluminar) {
        c.numBombillas++;
    } else {
        c.numBombillas--;
    }
}
void ponBombilla(tCelda& c) { //tampoco se muy bien lo que piden
    c.tipo = BOMBILLA;
}

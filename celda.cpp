
#include "celda.h"

char celdaToChar(const tCelda& celda) {
    char aux;
    if (celda.tipo == BOMBILLA) {
        aux = '*';
    } else if (celda.tipo == PARED){
        if (celda.numBombillas != -1) {
            aux = celda.numBombillas; //el if/else interno lo he puesto para que me imprima un x en vez de una Q, pero tengo que comprobar
        } else {
            aux = 'X';
        }
    } else {
        aux = '.'; //en cualquier otro caso devuelve un blanco, tengo puesto un  punto para ver si se guardab bien el tablero pero en teoria es un caracter en blanco
    }
    return aux;
}

tCelda charToCelda(char c) {
    tCelda celda;
    if (c == 'X') {
        celda.tipo = PARED;
        celda.numBombillas = -1; //lo inicializo a -1 para distinguir con la otra pared pero tengo que ver si es asi, al igual que poner las otras a  0
    } else if (isdigit(c)) { //si c es un numero, funcion isdigit buscada en google
        celda.tipo = PARED;
        celda.numBombillas = c;
    } else if (c == '.') {
        celda.tipo = LIBRE;
        //celda.numBombillas = 0;
    } else if (c == '*') {
        celda.tipo = BOMBILLA;
        //celda.numBombillas = 0;
    }
    return celda;
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
    return c.tipo == LIBRE && c.numBombillas == 0;
}
bool estaIluminada(const tCelda& c) {

    return c.tipo == LIBRE && c.numBombillas > 0;
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

#ifndef LEXICO_H
#define LEXICO_H

#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string>
#include <cstdio>

#define TAM_BUFFER 100
using namespace std;

class Lexico {
    char *nombreFichero;    // Nombre del fichero fuente
    FILE* entrada;          // Fichero de entrada
    int n1;                 // Número de línea
    int traza;              // Control de traza
    char buffer[TAM_BUFFER];// Buffer auxiliar de caracteres
    int pBuffer;            // Posición en el buffer

public:
    Lexico(char *unNombreFichero, int una_traza = 0);
    ~Lexico();
    char siguienteToken(void);
    void devuelveToken(char toke);
    int lineaActual(void) { return n1; };
    int existeTraza(void) { if (traza) return 1; else return 0; }
};

#endif

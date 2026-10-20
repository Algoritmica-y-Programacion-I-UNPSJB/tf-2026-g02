#include <stdio.h>      
#include "tablero.h"    


void inicializarTablero(char tablero[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            tablero[i][j] = '~';
        }
    }
}


void mostrarTablero(char tablero[FILAS][COLUMNAS]) {
    printf("\n    ");
    
    for (int j = 0; j < COLUMNAS; j++) {
        printf("%d ", j);
    }
    printf("\n   ---------------------\n");

   
    for (int i = 0; i < FILAS; i++) {
        printf("%c | ", 'A' + i); 
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%c ", tablero[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
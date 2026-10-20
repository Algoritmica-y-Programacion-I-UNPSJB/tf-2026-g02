#include <stdio.h>
#include "tablero.h"

int main() {
    char tableroJugador[FILAS][COLUMNAS];

    printf("=== TRABAJO INTEGRADOR: BATALLA NAVAL ===\n");

    inicializarTablero(tableroJugador);

    printf("\nTablero del jugador:\n");
    mostrarTablero(tableroJugador);

    return 0;
}
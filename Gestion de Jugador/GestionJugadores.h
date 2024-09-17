#include <iostream>
#include <cstring> // Para strcpy
using namespace std;
#include "Jugador.h"

// Función para eliminar un jugador en una posición específica
void eliminarJugador(Jugador *&vectorJugadores, int &tamanio, int posicion) {
    // Verificar si la posición es válida
    if (posicion < 0 || posicion >= tamanio) {
        cout << "Posición inválida, fuera del rango del vector." << endl;
        return;
    }

    // Desplazar todos los jugadores desde la posición 'posicion' hasta el final hacia la izquierda
    for (int i = posicion; i < tamanio - 1; ++i) {
        vectorJugadores[i] = vectorJugadores[i + 1];
    }

    // Liberar memoria del jugador en la última posición
    delete[] vectorJugadores[tamanio - 1].apellido; 

    // Reducimos el tamaño del vector en 1
    tamanio--;

    // Mostrar mensaje de confirmación
    cout << "Jugador en la posición " << posicion << " eliminado." << endl;
}

// Función para añadir un jugador al final del vector
void adicionarJugador(Jugador *&vectorJugadores, int &tamanio, Jugador nuevoJugador) {
    // Crear un nuevo vector con tamaño incrementado
    Jugador *nuevoVector = new Jugador[tamanio + 1];
    
    // Copiar jugadores del vector antiguo al nuevo
    for (int i = 0; i < tamanio; ++i) {
        nuevoVector[i] = vectorJugadores[i];
    }

    // Añadir el nuevo jugador al final
    nuevoVector[tamanio] = nuevoJugador;

    // Liberar la memoria del vector antiguo
    for (int i = 0; i < tamanio; ++i) {
        delete[] vectorJugadores[i].apellido;
    }
    delete[] vectorJugadores;

    // Actualizar el puntero del vector y el tamaño
    vectorJugadores = nuevoVector;
    tamanio++;
}

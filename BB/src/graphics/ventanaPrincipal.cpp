#include "ventanaPrincipal.h"
#include <iostream>

namespace BB {

VentanaPrincipal::VentanaPrincipal() : ventana(nullptr) {}

VentanaPrincipal::~VentanaPrincipal() {
    destruir(); // Por si no fue llamado explícitamente
}

bool VentanaPrincipal::crear(const char* titulo, int ancho, int alto) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Error al inicializar SDL: " << SDL_GetError() << std::endl;
        return false;
    }

    ventana = SDL_CreateWindow(titulo, ancho, alto, 0);
    if (!ventana) {
        std::cerr << "Error al crear ventana: " << SDL_GetError() << std::endl;
        return false;
    }

    return true;
}

void VentanaPrincipal::mostrarPorTiempo(int milisegundos) {
    SDL_Delay(milisegundos);
}

void VentanaPrincipal::destruir() {
    if (ventana) {
        SDL_DestroyWindow(ventana);
        ventana = nullptr;
    }
    SDL_Quit();
}

}


#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H

#include <SDL3/SDL.h>

namespace BB {

class VentanaPrincipal {
public:
    VentanaPrincipal();
    ~VentanaPrincipal();

    bool crear(const char* titulo, int ancho, int alto);
    void mostrarPorTiempo(int milisegundos);
    void destruir();

private:
    SDL_Window* ventana;
};

}

#endif // VENTANAPRINCIPAL_H

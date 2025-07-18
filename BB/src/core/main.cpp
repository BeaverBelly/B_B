#include "../graphics/ventanaPrincipal.h"

int main() {
    BB::VentanaPrincipal ventana;// hello, i arrived

    if (ventana.crear("BB - Motor", 800, 600)) {
        ventana.mostrarPorTiempo(8000);
    }

    return 0;
}

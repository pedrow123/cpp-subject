#include <iostream>

#include "FilaCircular.hpp"

int main() {
    FilaCircular<int, 5> fila;

    // Enfileire alguns elementos.
    for (int i = 1; i <= 5; i++) {
        fila.enfileirar(i * 10);
    }

    

    while (!fila.estaVazia()) {
        int valor;
        if (fila.desenfileirar(valor)) {
            std::cout << "Desenfileirado: " << valor << std::endl;
        }

        
    }
    return 0;
}
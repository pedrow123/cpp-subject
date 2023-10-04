#include <iostream>

#include "Retangulo.hpp"

int main() {
    Retangulo r1;
    uint16_t baseLida, alturaLida;

    std::cout << "Digite base e altura do retângulo: ";
    std::cin >> baseLida >> alturaLida;
    r1.setBase(baseLida);
    r1.setAltura(alturaLida);
    std::cout << "A área do retângulo é: "
              << r1.calcularArea(r1.getBase(), r1.getAltura());
    std::cout << "\nO perímetro do retângulo é: "
              << r1.calcularPerimetro(r1.getBase(), r1.getAltura());
    return 0;
}
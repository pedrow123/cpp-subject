#include <iostream>

#include "Retangulo.hpp"

int main() {
    Retangulo r1{};
    Retangulo r2{15, 5};
    
    std::cout << "A área do retângulo 1 é: "
              << r1.calcularArea(r1.getBase(), r1.getAltura());
    std::cout << "\nO perímetro do retângulo 1 é: "
              << r1.calcularPerimetro(r1.getBase(), r1.getAltura()) << "\n";
    std::cout << "A área do retângulo 2 é: "
              << r2.calcularArea(r2.getBase(), r2.getAltura()) << "\n";
    std::cout << "O perímetro do retângulo 2 é: "
              << r1.calcularPerimetro(r2.getBase(), r2.getAltura()) << "\n";
    std::cout << "Quantidade de retangulos: " << r2.getQtdeRet();
    return 0;
}
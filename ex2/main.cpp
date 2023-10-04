#include <iostream>
#include "Retangulo.hpp"

int main(){
    Retangulo r1;
    std::cout << "Digite base e altura do retângulo: ";
    std::cin >> r1.base >> r1.altura;
    std::cout << "A área do retângulo é: " << r1.calcularArea(r1.base,r1.altura);
    return 0;
}
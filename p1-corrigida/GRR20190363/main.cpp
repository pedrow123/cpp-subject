#include <iostream>

#include "Retangulo.hpp"
#include "Circulo.hpp"
#include "TelaDesenho.hpp"
#include "ValorInvalidoException.hpp"

using namespace luan;

int main(){

    TelaDesenho tela;

    try {
        Retangulo r1{10, 2};
        std::cout << r1 << '\n';
        tela.adicionarForma(&r1);
    } catch (ValorInvalidoException& vie) {
        std::cout << "Nao foi possivel criar forma: " << vie.what() << vie.valor << std::endl;
    }

    try {
        Circulo c1{2};
        std::cout << c1 << '\n';
        tela.adicionarForma(&c1);
    } catch (ValorInvalidoException& vie) {
        std::cout << "Nao foi possivel criar forma: " << vie.what() << vie.valor << std::endl;
    }

    try {
        Retangulo r2{5, 0};
        std::cout << r2 << '\n';
        tela.adicionarForma(&r2);
    } catch (ValorInvalidoException& vie) {
        std::cout << "Nao foi possivel criar forma: " << vie.what() << vie.valor << std::endl;
    }

    std::cout << tela.calcularAreaTotal() << '\n';

    return 0;
}
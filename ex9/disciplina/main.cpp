#include <iostream>

#include "Console.hpp"
#include "ConteudoMinistrado.hpp"
#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
    Pessoa prof1{"João", 11111111111, 40};
    Disciplina dis1{"C++", nullptr};
    dis1.setProfessor(&prof1);

    dis1.adicionarConteudoMinistrado("Ponteiros", 4);
    dis1.adicionarConteudoMinistrado("Referencias", 2);

    std::cout << "\nConteúdos ministrados (usando listarConteudos):"
              << std::endl;
    dis1.listarConteudos();
    std::cout << std::endl;

    dis1.removerConteudoMinistrado(1);

    std::cout << "\nConteúdos ministrados após remover conteúdo:" << std::endl;
    dis1.listarConteudos();

    std::cout << "\n\nDados da disciplina: " << std::endl;

    Console::imprimirDadosDisciplina(dis1);

    dis1.limparConteudos();

    return 0;
}

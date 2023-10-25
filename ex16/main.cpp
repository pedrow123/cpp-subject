#include <iostream>

#include "Pessoa.hpp"
#include "ProfessorEngenheiro.hpp"

int main(){
    ProfessorEngenheiro pe{"Maria", 11111111111,85, 40, 1234};
    std::cout << "Nome: " << pe.getNome() << "\tSalario R$" << pe.getSalario() <<",00\n";

    return 0;
}
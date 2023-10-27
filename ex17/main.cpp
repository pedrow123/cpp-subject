#include <iostream>

#include "Disciplina.hpp"
#include "SalaAula.hpp"
#include "EnumTipoDisciplina.hpp"

int main(){

    try {
        ufpr::Disciplina d1{"Programacao", nullptr, ufpr::EnumTipoDisciplina::OPTATIVA};
        d1.setCargaHoraria(29);
        std::cout << d1.getNome() << '\n';

    } catch (std::invalid_argument &iv){
        std::cout << iv.what();
    }

    ufpr::SalaAula a1{"Lab 12", 25};


    

    return 0;
}
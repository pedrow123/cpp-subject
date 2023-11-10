#include <iostream>
#include "Disciplina.hpp"

int main() {
    ufpr::Disciplina disciplina1("Matemática", nullptr, ufpr::EnumTipoDisciplina::MANDATORIA);
    disciplina1.setCargaHoraria(45);

    ufpr::Disciplina disciplina2("Matemática", nullptr, ufpr::EnumTipoDisciplina::MANDATORIA);
    disciplina2.setCargaHoraria(45);

    if (disciplina1 == disciplina2) {
        std::cout << "Disciplinas são iguais." << std::endl;
    } else {
        std::cout << "Disciplinas não são iguais." << std::endl;
    }

    if (disciplina1 != disciplina2) {
        std::cout << "Disciplinas são diferentes." << std::endl;
    } else {
        std::cout << "Disciplinas não são diferentes." << std::endl;
    }

    ufpr::Disciplina disciplina3("Física", nullptr, ufpr::EnumTipoDisciplina::OPTATIVA);
    disciplina3.setCargaHoraria(60);

    if (disciplina1 == disciplina3) {
        std::cout << "Disciplinas são iguais." << std::endl;
    } else {
        std::cout << "Disciplinas não são iguais." << std::endl;
    }

    if (disciplina1 != disciplina3) {
        std::cout << "Disciplinas são diferentes." << std::endl;
    } else {
        std::cout << "Disciplinas não são diferentes." << std::endl;
    }

    disciplina1 = disciplina3;

    std::cout << "Informações da Nova Disciplina1:" << std::endl;
    disciplina1.imprimirDados("Dados da Disciplina1", 300);

    return 0;
}

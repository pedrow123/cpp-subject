#include <iostream>
#include <list>
#include <string>

#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "SalaAula.hpp"

int main() {
	SalaAula sala1{"Lab Info 1", 20};
	SalaAula sala2{"Lab 2", 25};

    Pessoa prof1{"João", 11111111111, 40};
    Disciplina dis1{"Orientacao a Objetos"};
    dis1.setProfessor(&prof1);
	dis1.setSalaAula(&sala1);

    Pessoa prof2{"Maria", 22222222222, 30};
    Disciplina dis2{"Sistemas Operacionais"};
    dis2.setProfessor(&prof2);
	sala1.adicionarDisciplina(&dis2);
    

    std::cout << "Disciplina: " << dis1.getNome() << "\n" << "Sala: "
              << dis1.getSalaAula()->getNome() << "\n\n";


    std::cout << "Sala: " << sala1.getNome() << "\n"
              << "Disciplinas: "
              << "\n";

    std::list<Disciplina*>::iterator it{sala1.getDisciplinas().begin()};
    for (; it != sala1.getDisciplinas().end(); ++it) {
        std::cout << (*it)->getNome() << '\n';
    }

    return 0;
}
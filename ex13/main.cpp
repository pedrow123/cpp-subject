#include <iostream>
#include <list>

#include "Professor.hpp"
#include "Aluno.hpp"
#include "Disciplina.hpp"
#include "ProfessorAdjunto.hpp"

int main() {
    Disciplina d1{"C++"};
    Professor p1{"Paulo", 11111111111, 200, 20};
    
    d1.setProfessor(&p1);

    Aluno a1{"Joao", 00000000000, 20190363, 0.9};
    Aluno a2{"Maria", 22222222222, 20204532, 0.8};
    
    d1.adicionarAluno(&a1);
    d1.adicionarAluno(&a2);

    std::cout << d1.getNome() << std::endl;
    std::cout << "Professor: " << d1.getProfessor()->getNome() << std::endl;
    std::cout  << "Alunos: " << std::endl;

    std::list<Aluno*>::const_iterator it;
    for(it = d1.getAlunos().begin(); it != d1.getAlunos().end(); ++it){
        std::cout << (*it)->getNome() << ' ' << (*it)->getGrr() << ' ' << (*it)->getIra() << std::endl;
    }

    return 0;
}

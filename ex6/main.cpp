#include <iostream>
#include <string>

#include "Disciplina.hpp"

int main() {
    Pessoa* p1{new Pessoa{"Pedro", 11111111111, 45}};
    Curso c1{"Ciência da Computação", 1988, 3200};
    Disciplina* d1{new Disciplina{"Orientacao a Objetos", p1, c1}};

    Pessoa* p2{new Pessoa{"Maria", 22222222222, 21}};
    Pessoa* p3{new Pessoa{"Carlos", 33333333333, 22}};
    Pessoa* p4{new Pessoa{"Jose", 44444444444, 24}};

    d1->adicionarAluno(p2);
    d1->adicionarAluno(p3);
    d1->adicionarAluno(p4);

    std::cout << "Disciplina: " << d1->getNome()
              << " Professor: " << d1->getNomeProfessor() << "\n"
              << " Curso: " << d1->getCursoVinculado().getNomeCurso()
              << " Ano de criação: " << d1->getCursoVinculado().getAnoCriacao()
              << " Carga Horaria Mínima: "
              << d1->getCursoVinculado().getCargaHorariaMinima() << '\n';

    std::list<Pessoa*>::iterator it{d1->getVetorAlunos().begin()};
    for ( ; it != d1->getVetorAlunos().end(); ++it) {
        std::cout << (*it)->getNome() << '\n';
        delete *it;
    }

    d1->removerAluno(22222222222);
    d1->removerAluno(p3);

    for (d1->getVetorAlunos().begin(); it != d1->getVetorAlunos().end(); ++it) {
        std::cout << (*it)->getNome() << '\n';
        delete *it;
    }

    delete p1;
    delete p2;
    delete p3;
    delete d1;

    return 0;
}
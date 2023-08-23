#include <iostream>
#include <string>

#include "Disciplina.hpp"

int main() {
    Pessoa* p1{new Pessoa{"Pedro", 11111111111, 45}};
    Curso c1{"Ciência da Computação", 1988, 3200};
    Disciplina* d1{new Disciplina{"Orientacao a Objetos", p1, c1}};

    Pessoa* p2{new Pessoa{"Maria", 22222222222, 21}};
    Pessoa* p3{new Pessoa{"Carlos", 33333333333, 22}};

    d1->adicionarAluno(p2);
    d1->adicionarAluno(p3);

    std::cout << "Disciplina: " << d1->getNome()
              << " Professor: " << d1->getNomeProfessor() << "\n"
              << " Curso: " << d1->getCursoVinculado().getNomeCurso()
              << " Ano de criação: " << d1->getCursoVinculado().getAnoCriacao()
              << " Carga Horaria Mínima: "
              << d1->getCursoVinculado().getCargaHorariaMinima() << '\n';
    for (int i = 0; i < d1->getQtdeAlunos(); i++) {
        std::cout << d1->getVetorAlunos()[i]->getNome() << '\t'
                  << d1->getVetorAlunos()[i]->getIdade() << '\t'
                  << d1->getVetorAlunos()[i]->getCpf() << '\n';
    }

    delete p1;
    delete p2;
    delete p3;
    delete d1;

    return 0;
}
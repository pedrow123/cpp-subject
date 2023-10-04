#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"

class Disciplina {
   public:
    Disciplina(std::string nomeDisciplina, Pessoa *novoProfessor);

    std::string getNome();
    void setNome(std::string novoNome);

    int getCargaHoraria();
    void setCargaHoraria(unsigned int novaCarga);

    void setProfessor(Pessoa *np);
    Pessoa *getProfessor();
    std::string getNomeProfessor();

    bool adicionarAluno(Pessoa *novoAluno);
    Pessoa **getVetorAlunos();

    int getQtdeAlunos();
    void setQtdeAlunos(unsigned short int novaQtde);

   private:
    std::string nome;
    unsigned short int cargaHoraria;
    Pessoa *professor;
    Pessoa *alunos[50];
    unsigned short int qtdeAlunos;
};
#endif

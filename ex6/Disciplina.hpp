#ifndef DISCIPLINA_HPP
#define DISCIPLINA_HPP

#include <string>

#include "Curso.hpp"
#include "Pessoa.hpp"

class Disciplina {
   public:
    Disciplina(std::string nome, Curso &cursoVinculado);
    Disciplina(std::string nome, Pessoa *professor, Curso &cursoVinculado);

    std::string getNome();
    void setNome(std::string nome);

    int getCargaHoraria();
    void setCargaHoraria(unsigned int cargaHoraria);

    void setProfessor(Pessoa *professor);
    Pessoa *getProfessor();
    std::string getNomeProfessor();

    bool adicionarAluno(Pessoa *aluno);
    Pessoa **getVetorAlunos();

    int getQtdeAlunos();
    void setQtdeAlunos(unsigned short int qtdeAlunos);

    Curso &getCursoVinculado();

   private:
    std::string nome;
    unsigned short int cargaHoraria;
    Pessoa *professor;
    Pessoa *alunos[50];
    Curso &cursoVinculado;
    unsigned short int qtdeAlunos;
};
#endif
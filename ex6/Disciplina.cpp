#include "Disciplina.hpp"

Disciplina::Disciplina(std::string nome, Curso& cursoVinculado)
    : nome{nome}, cursoVinculado{cursoVinculado} {}

Disciplina::Disciplina(std::string nome, Pessoa* professor,
                       Curso& cursoVinculado)
    : nome{nome},
      professor{professor},
      cursoVinculado{cursoVinculado},
      qtdeAlunos{0} {}

std::string Disciplina::getNome() { return this->nome; }

void Disciplina::setNome(std::string nome) { this->nome = nome; }

int Disciplina::getCargaHoraria() { return this->cargaHoraria; }

void Disciplina::setCargaHoraria(unsigned int cargaHoraria) {
    this->cargaHoraria = cargaHoraria;
}

void Disciplina::setProfessor(Pessoa* professor) {
    this->professor = professor;
}

Pessoa* Disciplina::getProfessor() { return this->professor; }

std::string Disciplina::getNomeProfessor() {
    return this->professor->getNome();
}

bool Disciplina::adicionarAluno(Pessoa* aluno) {
    if (getQtdeAlunos() < 50) {
        this->alunos[getQtdeAlunos()] = aluno;
        setQtdeAlunos(getQtdeAlunos() + 1);
        return true;
    }
    return false;
}

int Disciplina::getQtdeAlunos() { return this->qtdeAlunos; }

void Disciplina::setQtdeAlunos(unsigned short int qtdeAlunos) {
    this->qtdeAlunos = qtdeAlunos;
}

Pessoa** Disciplina::getVetorAlunos() { return this->alunos; }

Curso& Disciplina::getCursoVinculado() { return this->cursoVinculado; }
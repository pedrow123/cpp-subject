#include "Disciplina.hpp"

#include "Pessoa.hpp"

Disciplina::Disciplina(std::string nomeDisciplina, Pessoa* novoProfessor)
    : nome{nomeDisciplina}, professor{novoProfessor}, qtdeAlunos{0} {}

std::string Disciplina::getNome() { return nome; }

void Disciplina::setNome(std::string novoNome) { nome = novoNome; }

int Disciplina::getCargaHoraria() { return cargaHoraria; }

void Disciplina::setCargaHoraria(unsigned int novaCarga) {
    cargaHoraria = novaCarga;
}

void Disciplina::setProfessor(Pessoa* np) { professor = np; }

Pessoa* Disciplina::getProfessor() { return professor; }

std::string Disciplina::getNomeProfessor() { return professor->getNome(); }

bool Disciplina::adicionarAluno(Pessoa* novoAluno) {
    if (getQtdeAlunos() < 50) {
        alunos[getQtdeAlunos()] = novoAluno;
        setQtdeAlunos(getQtdeAlunos() + 1);
        return true;
    }
    return false;
}

int Disciplina::getQtdeAlunos() { return qtdeAlunos; }

void Disciplina::setQtdeAlunos(unsigned short int novaQtde) {
    qtdeAlunos = novaQtde;
}

Pessoa** Disciplina::getVetorAlunos() { return alunos; }
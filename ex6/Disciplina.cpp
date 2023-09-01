#include "Disciplina.hpp"

Disciplina::Disciplina(std::string nome, Curso& cursoVinculado)
    : nome{nome}, cursoVinculado{cursoVinculado} {}

Disciplina::Disciplina(std::string nome, Pessoa* professor,
                       Curso& cursoVinculado)
    : nome{nome}, professor{professor}, cursoVinculado{cursoVinculado} {}

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
    if (getListaAlunos().size() < 50) {
        getListaAlunos().push_back(aluno);
        return true;
    }
    return false;
}

bool Disciplina::removerAluno(Pessoa* aluno) {
    if (getListaAlunos().size() > 0) {
        getListaAlunos().remove(aluno);
        delete aluno;
        return true;
    }
    return false;
}

bool Disciplina::removerAluno(unsigned long int cpf) {
    std::list<Pessoa*>::iterator it;
    for (it = getListaAlunos().begin(); it != getListaAlunos().end(); ++it) {
        if ((*it)->getCpf() == cpf) break;
    }
    if (it != getListaAlunos().end()) {
        Pessoa* ptr{*it};
        getListaAlunos().erase(it);
        delete ptr;
        return true;
    }
    return false;
}

std::list<Pessoa*>& Disciplina::getListaAlunos() { return this->alunos; }

Curso& Disciplina::getCursoVinculado() { return this->cursoVinculado; }
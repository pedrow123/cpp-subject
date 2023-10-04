#include "Curso.hpp"

Curso::Curso() {}

Curso::Curso(std::string nomeCurso) : nomeCurso{nomeCurso} {}

Curso::Curso(std::string nomeCurso, uint16_t anoCriacao,
             uint16_t cargaHorariaMinima)
    : Curso{nomeCurso} {
    setAnoCriacao(anoCriacao);
    setCargaHorariaMinima(cargaHorariaMinima);
}

std::string Curso::getNomeCurso() { return this->nomeCurso; }

void Curso::setNomeCurso(std::string nomeCurso) { this->nomeCurso = nomeCurso; }
uint16_t Curso::getAnoCriacao() { return this->anoCriacao; }

void Curso::setAnoCriacao(uint16_t anoCriacao) {
    this->anoCriacao = anoCriacao;
}

uint16_t Curso::getCargaHorariaMinima() { return this->cargaHorariaMinima; }

void Curso::setCargaHorariaMinima(uint16_t cargaHorariaMinima) {
    this->cargaHorariaMinima = cargaHorariaMinima;
}
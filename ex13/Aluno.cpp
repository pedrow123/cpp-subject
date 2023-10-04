#include "Aluno.hpp"

Aluno::Aluno(const std::string& nome, const uint64_t cpf,
             const unsigned long grr, const float ira)
    : Pessoa{nome, cpf}, grr{grr}, ira{ira} {}

Aluno::~Aluno() {}

unsigned long Aluno::getGrr() const { return this->grr; }

void Aluno::setGrr(const unsigned long grr) { this->grr = grr; }

float Aluno::getIra() const { return this->ira; }

void Aluno::setIra(const float ira) { this->ira = ira; }
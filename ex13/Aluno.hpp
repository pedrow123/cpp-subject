#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"
class Aluno : public Pessoa {
   public:
    Aluno(const std::string& nome, const uint64_t cpf, const unsigned long grr, const float ira);
    ~Aluno();

    unsigned long getGrr() const;
    void setGrr(const unsigned long grr);

    float getIra() const;
    void setIra(const float ira);

   private:
    uint64_t grr;
    float ira;
};
#endif
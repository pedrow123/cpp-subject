#ifndef PESSOA_H
#define PESSOA_H

#include <cstdint>
#include <string>

class Pessoa {
   public:
    Pessoa();
    Pessoa(std::string const nomePessoa);
    Pessoa(std::string const nomePessoa, uint64_t const cpfPessoa, unsigned short const idade);

    const uint64_t getCpf() const;
    void setCpf(uint64_t const novoCpf);

    const std::string getNome() const;
    void setNome(std::string const novoNome);

    const unsigned short int getIdade() const;
    void setIdade(unsigned short const novaIdade);

   private:
    bool validarCPF(uint64_t cpfTeste);

    std::string nome;
    uint64_t cpf;
    uint8_t idade;
};
#endif
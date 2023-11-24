#include <iostream>
#include <stdexcept>

#include "CPFInvalidoException.hpp"
#include "AlunoException.hpp"
#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main() {
  Pessoa *p{nullptr};
  std::string nome;
  unsigned long cpf;
  unsigned short int idade;
  Disciplina dis{"Orientação a Objetos"};

  std::cout << "Digite o nome: ";
  std::cin >> nome;
  std::cout << "Digite o cpf: ";
  std::cin >> cpf;
  std::cout << "Digite a idade: ";
  std::cin >> idade;

  try {
    p = new Pessoa{nome, cpf, idade};
    std::cout << p->getNome() << " " << p->getCpf() << " " << p->getIdade()
              << std::endl;
  } catch (std::invalid_argument &iv) {
    std::cout << "Argumento invalido: " << iv.what() << std::endl;
  } catch (CPFInvalidoException &cpfe) {
    std::cout << "Erro de CPF: " << cpfe.what() << cpfe.cpf << std::endl;
  } catch (std::exception &ex) {
    std::cout << "Erro Generico: " << ex.what() << std::endl;
  }

  std::cout << "Digite o cpf do aluno: ";
  std::cin >> cpf;

  try {
    dis.removerAluno(cpf);
    std::cout << "Aluno removido." << cpf << std::endl;
  } catch (std::invalid_argument &iv) {
    std::cout << "Argumento invalido: " << iv.what() << std::endl;
  } catch (AlunoException &ae) {
    std::cout << "Aluno inexistente: " << ae.what() << ae.cpf << std::endl;
  } catch (std::exception &ex) {
    std::cout << "Erro Generico: " << ex.what() << std::endl;
  }

  return 0;

  delete p;
  return 0;
}

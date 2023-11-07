#include <iostream>
#include <string>

#include <iostream>
#include "CPF.hpp"
#include "Pessoa.hpp"

int main() {
    try {
        // Testando a classe CPF
        std::cout << "Digite um CPF: ";
        ufpr::CPF cpf{11111111111};
        std::cin >> cpf;

        
        // Testando a classe Pessoa
        ufpr::Pessoa pessoa1{"Alice", cpf};
        ufpr::Pessoa pessoa2{"Bob",cpf};

        if (pessoa1 == pessoa2) {
            std::cout << "As pessoas são a mesma." << std::endl;
        } else {
            std::cout << "As pessoas são diferentes." << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}


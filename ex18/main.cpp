#include <iostream>
#include <string>

#include "CPF.hpp"
#include "Pessoa.hpp"

int main() {
	ufpr::CPF cpf1{22222222222};
	ufpr::CPF cpf2{11111111111};
	if (cpf1 != cpf2) {
    	std::cout << "Diferentes\n";
	} else {
    	std::cout << "Iguais\n";
	}
	return 0;
}

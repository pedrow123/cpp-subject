#include <iostream>
#include <list>
#include <string>

#include "Disciplina.hpp"
#include "Pessoa.hpp"

int main() {
   
    std::list<Pessoa*> listaPessoas;
    listaPessoas.push_back(new Pessoa{"Joao", 11111111111, 20});
    listaPessoas.push_back(new Pessoa{"Maria"});
    listaPessoas.push_front(new Pessoa{"Pedro"});

    std::list<Pessoa*>::iterator it;
    for (it = listaPessoas.begin(); it != listaPessoas.end(); ++it){
        std::cout << (*it)->getNome() << "\n";
		delete *it;
	}
    // Disciplina d1{"Orientacao a Objetos"};

    // std::cout << p1.getNome() << '\t' << p1.getIdade() << '\t' << p1.getCpf()
    // << '\n'; std::cout << p2.getNome() << '\n';

    // std::cout << d1.getNome() << '\n';

    // std::list<int> lista;
    // lista.push_back(10);
    // lista.push_back(20);
    // lista.push_front(30);

    // std::list<int>::iterator it;
    // for (it = lista.begin(); it != lista.end(); ++it) std::cout << *it <<
    // "\n";

    return 0;
}
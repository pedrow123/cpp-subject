#include <iostream>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "ConteudoMinistrado.hpp"
#include "Console.hpp"
#include "SalaAula.hpp"

int main(){
    Disciplina dis1{"C++", nullptr};
    Disciplina* dis2{new Disciplina{"Java", nullptr}};

    SalaAula sala{"Lab Info 1", 40};
    dis1.setSalaAula(&sala);
    dis2->setSalaAula(&sala);

    std::list<Disciplina*> disSala{sala.getDisciplinas()};
    std::list<Disciplina*>::iterator it{disSala.begin()};
    for (; it != disSala.end(); ++it)
        std::cout << (*it)->getNome() << '\n';

    delete dis2;
    std::cout << "Fim do Programa\n";

    return 0;
}
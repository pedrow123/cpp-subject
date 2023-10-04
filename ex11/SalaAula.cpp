#include "SalaAula.hpp"

SalaAula::SalaAula(std::string const nome, unsigned int const capacidade)
	:nome{nome}, capacidade{capacidade}{
}

SalaAula::~SalaAula(){
	std::list<Disciplina*>::iterator it{disciplinasMinistradas.begin()};
	for( ; it != disciplinasMinistradas.end(); it++)
		(*it)->anularSalaAula();
}
    
const std::string SalaAula::getNome() const{
	return this->nome;
}

void SalaAula::setNome(std::string const nome){
	this->nome = nome;
}

const unsigned int SalaAula::getCapacidade() const{
	return this->capacidade;
}

void SalaAula::setCapcidade(unsigned int const capacidade){
	this->capacidade = capacidade;
}

const std::list<Disciplina*>& SalaAula::getDisciplinas() const{
    return disciplinasMinistradas;
}
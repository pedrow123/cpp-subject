#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

#include "Disciplina.hpp"

class SalaAula{
	friend void Disciplina::setSalaAula(SalaAula* salaAula);

	public:
		SalaAula(std::string nome, unsigned int capacidade);
		
		std::string getNome();
		void setNome(std::string nome);

		unsigned int getCapacidade();
		void setCapcidade(unsigned int capacidade);

        std::list<Disciplina*>& getDisciplinas();
		~SalaAula();
	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif
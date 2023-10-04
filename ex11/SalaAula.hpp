#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

#include "Disciplina.hpp"

class SalaAula{
	friend void Disciplina::setSalaAula(SalaAula* salaAula);

	public:
		SalaAula(std::string const nome, unsigned int const capacidade);
		~SalaAula();
		
		const std::string getNome() const;
		void setNome(std::string const nome);

		const unsigned int getCapacidade() const;
		void setCapcidade(unsigned int const capacidade);

        const std::list<Disciplina*>& getDisciplinas() const;
	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif
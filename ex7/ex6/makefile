CC = g++
parametrosCompilacao= -Wall -g
nomePrograma=aula

all: $(nomePrograma)

$(nomePrograma): main.o Pessoa.o Disciplina.o Curso.o
	${CC} -o $(nomePrograma) main.o Pessoa.o Disciplina.o Curso.o $(parametrosCompilacao)

main.o: main.cpp
	${CC} -c main.cpp $(parametrosCompilacao)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	${CC} -c Pessoa.cpp $(parametrosCompilacao)

Disciplina.o: Disciplina.hpp Disciplina.cpp
	${CC} -c Disciplina.cpp $(parametrosCompilacao)

Curso.o: Curso.hpp Curso.cpp
	${CC} -c Curso.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomePrograma)
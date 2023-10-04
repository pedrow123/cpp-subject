parametrosCompilacao=-Wall #-Wshadow
nomeAula=aula

all: $(nomeAula)

$(nomeAula): main.o FilaCircular.hpp
	g++ -o $(nomeAula) main.o FilaCircular.hpp $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)

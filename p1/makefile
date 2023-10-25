parametrosCompilacao=-Wall #-Wshadow                                            
nomePrograma=retangulo

all: $(nomePrograma)

$(nomePrograma): main.o TelaDesenho.o Forma.o Circulo.o Retangulo.o
		g++ -o $(nomePrograma) main.o TelaDesenho.o Forma.o Circulo.o Retangulo.o $(parametrosCompilacao)

main.o: main.cpp
		g++ -c main.cpp $(parametrosCompilacao)

TelaDesenho.o: TelaDesenho.cpp TelaDesenho.hpp
		g++ -c TelaDesenho.cpp $(parametrosCompilacao)

Forma.o: Forma.cpp Forma.hpp
		g++ -c Forma.cpp $(parametrosCompilacao)

Retangulo.o: Retangulo.cpp Retangulo.hpp
		g++ -c Retangulo.cpp $(parametrosCompilacao)


Circulo.o: Circulo.hpp Circulo.cpp
		g++ -c Circulo.cpp $(parametrosCompilacao)


clean:
		rm -f *.o *.gch $(nomePrograma)
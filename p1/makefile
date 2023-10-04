parametrosCompilacao=-Wall #-Wshadow                                            
nomePrograma=retangulo

all: $(nomePrograma)

$(nomePrograma): main.o ClasseA.o
		g++ -o $(nomePrograma) main.o ClasseA.o $(parametrosCompilacao)

main.o: main.cpp
		g++ -c main.cpp $(parametrosCompilacao)

ClasseA.o: ClasseA.hpp ClasseA.cpp
		g++ -c ClasseA.cpp $(parametrosCompilacao)

clean:
		rm -f *.o *.gch $(nomePrograma)
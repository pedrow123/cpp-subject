#ifndef FILA_CIRCULAR_HPP
#define FILA_CIRCULAR_HPP

#include <unistd.h>

#include <cstdlib>

template <typename T, std::size_t MAX_FILA>
class FilaCircular {
public:
    FilaCircular() : tamanho(0), prox(0), ant(0) {}

    bool enfileirar(const T& valor) {
        if (estaCheia()) {
            return false; // A fila está cheia, não é possível enfileirar mais elementos.
        }
        fila[ant] = valor;
        ant = (ant + 1) % MAX_FILA; // Atualiza a posição da ant considerando o wrap-around.
        tamanho++;
        return true;
    }

    bool desenfileirar(T& valor) {
        if (estaVazia()) {
            return false; // A fila está vazia, não é possível desenfileirar.
        }
        valor = fila[prox];
        prox = (prox + 1) % MAX_FILA; // Atualiza a posição da prox considerando o wrap-around.
        tamanho--;
        return true;
    }

    bool estaVazia() const {
        return tamanho == 0;
    }

    bool estaCheia() const {
        if (tamanho == MAX_FILA) return true;
        return false;
    }

    std::size_t tamanhoFila() const {
        return tamanho;
    }

private:
    T fila[MAX_FILA];
    std::size_t tamanho;
    std::size_t prox;
    std::size_t ant;
};

#endif // FILA_CIRCULAR_HPP

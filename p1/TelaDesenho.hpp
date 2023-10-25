#ifndef TELA_DESENHO_HPP
#define TELA_DESENHO_HPP

#include <list>

#include "Forma.hpp"

class TelaDesenho {
public:
    TelaDesenho();
    ~TelaDesenho();

    void adicionarForma(Forma* const forma);
    unsigned int calcularAreaTotal();
private:
    std::list<Forma*> formas;
};

#endif;
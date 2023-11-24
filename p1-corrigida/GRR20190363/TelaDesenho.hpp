#ifndef TELA_DESENHO_HPP
#define TELA_DESENHO_HPP

#include <list>
#include <memory>

#include "Forma.hpp"

namespace luan {
class TelaDesenho{
    public:
        TelaDesenho();
        virtual ~TelaDesenho() =  default;

        void adicionarForma(const Forma* const forma);

        double calcularAreaTotal() const;
    private:
        std::list<const Forma*> formas;
};
}
#endif
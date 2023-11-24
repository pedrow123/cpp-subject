#ifndef VALOR_INVALIDO_EXCEPTION
#define VALOR_INVALIDO_EXCEPTION

#include <stdexcept>

namespace luan {
class ValorInvalidoException: public std::runtime_error {
    public:
        const double valor;

        ValorInvalidoException(double valor);
        virtual ~ValorInvalidoException() = default;
};
}

#endif
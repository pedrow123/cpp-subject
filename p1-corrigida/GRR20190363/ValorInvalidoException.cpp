#include "ValorInvalidoException.hpp"

using namespace luan;

ValorInvalidoException::ValorInvalidoException(const double valor)
    :std::runtime_error{"Valor invalido."}, valor{valor} {
}
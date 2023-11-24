#include "AlunoException.hpp"

AlunoException::AlunoException(const unsigned long cpf)
    :std::runtime_error{"Professor com CPF Inexistente."}, cpf{cpf}{
}
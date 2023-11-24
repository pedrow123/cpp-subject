#ifndef ALUNO_EXCEPTION
#define ALUNO_EXCEPTION

#include <stdexcept>

class AlunoException : public std::runtime_error {
    public:
        const unsigned long cpf;

        AlunoException(const unsigned long cpf);
        virtual ~AlunoException() = default;
};
#endif
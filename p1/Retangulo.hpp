#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include "Forma.hpp"

class Retangulo : public Forma{
    public:
        Retangulo(const unsigned int base, const unsigned int altura);
        virtual ~Retangulo() = default;

        const unsigned int getBase() const;
        void setBase(const unsigned int base);

        const unsigned int getAltura() const;
        void setAltura(const unsigned int altura);

    protected:
        virtual unsigned int calcularArea() const override;

    public:
        unsigned int base;
        unsigned int altura;
};

#endif
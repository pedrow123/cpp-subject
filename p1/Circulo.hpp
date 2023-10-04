#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Forma.hpp"

class Circulo : public Forma{
    public:
        Circulo(const unsigned int raio);
        virtual ~Circulo() = default;

        const unsigned int getRaio() const;
        void setRaio(const unsigned int raio);

    protected:
        virtual unsigned int calcularArea() const override;

    public:
        unsigned int raio;
};

#endif
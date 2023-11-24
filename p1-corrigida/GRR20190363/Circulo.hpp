#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Forma.hpp"
#include <iostream>

namespace luan {
class Circulo : public Forma{

    friend std::ostream& operator<<(std::ostream& stream, const Circulo& c);
    public:
        Circulo(const double raio);
        virtual ~Circulo() =  default;

        void setRaio(const double raio);
        double getRaio() const;

        virtual double calcularArea() const override;
    private:
        double raio;
};
}
#endif
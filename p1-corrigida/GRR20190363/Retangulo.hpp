#ifndef RETANGULO_HPP
#define RETANTULO_HPP

#include "Forma.hpp"
#include <iostream>

namespace luan{
class Retangulo : public Forma{

    friend std::ostream& operator<<(std::ostream& stream, const Retangulo& r);

    public:
        Retangulo(const double altura, const double largura);
        virtual ~Retangulo() =  default;

        void setAltura(const double altura);
        void setLargura(const double largura);

        double getAltura() const;
        double getLargura() const;

        virtual double calcularArea() const override;
    private:
        double altura;
        double largura;
};
}
#endif
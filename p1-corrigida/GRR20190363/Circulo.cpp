#include "Circulo.hpp"
#include "ValorInvalidoException.hpp"
#include <cmath>

namespace luan {
     
Circulo::Circulo(const double raio):Forma{} {
    this->setRaio(raio);
}

void Circulo::setRaio(const double raio){
    if (raio <= 0) throw ValorInvalidoException{raio};
    this->raio = raio;
}

double Circulo::getRaio() const{
    return this->raio;
}

double Circulo::calcularArea() const{
    return 2*M_PI*this->raio;
}

std::ostream& operator<<(std::ostream& stream, const Circulo& c) {
    stream << "raio: " << c.getRaio() << "    area: " << c.calcularArea() << '\n';
    return stream;
}
}
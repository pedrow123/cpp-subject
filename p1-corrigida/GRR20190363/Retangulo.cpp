#include "Retangulo.hpp"
#include "ValorInvalidoException.hpp"

namespace luan {

Retangulo::Retangulo(const double altura, const double largura):Forma{} {
    this->setAltura(altura);
    this->setLargura(largura);
}

void Retangulo::setAltura(const double altura){
    if (altura <= 0) throw ValorInvalidoException{altura};
    this->altura = altura;
}

void Retangulo::setLargura(const double largura){
    if (largura <= 0) throw ValorInvalidoException{largura};
    this->largura = largura;
}

double Retangulo::getAltura() const{
    return this->altura;
}

double Retangulo::getLargura() const{
    return this->largura;
}

double Retangulo::calcularArea() const{
    return this->largura*this->altura;
}

std::ostream& operator<<(std::ostream& stream, const Retangulo& r) {
    stream << "largura: " << r.getLargura() << "\taltura: " << r.getAltura() << "\tarea: " << r.calcularArea() << '\n';
    return stream;
}
}
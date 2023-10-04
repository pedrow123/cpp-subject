#include "Retangulo.hpp"

Retangulo::Retangulo(const unsigned int base, const unsigned int altura)
    : base{base}, altura{altura} {}

unsigned int Retangulo::calcularArea() const { return getBase() * getAltura(); }

const unsigned int Retangulo::getBase() const{
    return this->base;
}
void Retangulo::setBase(const unsigned int base){
    this->base = base;
}

const unsigned int Retangulo::getAltura() const{
    return this->altura;
}
void Retangulo::setAltura(const unsigned int altura){
    this->altura = altura;
}
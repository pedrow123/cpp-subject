#include "Circulo.hpp"

#include <cmath>

Circulo::Circulo(const unsigned int raio)
    : raio{raio} {}

unsigned int Circulo::calcularArea() const { return pow(getRaio(), 2) * 3; }

const unsigned int Circulo::getRaio() const{
    return this->raio;
}
void Circulo::setRaio(const unsigned int raio){
    this->raio = raio;
}

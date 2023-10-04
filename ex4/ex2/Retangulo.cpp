#include "Retangulo.hpp"

Retangulo::Retangulo(uint16_t novaBase) : base{novaBase}, altura{10} {}

Retangulo::Retangulo(uint16_t novaBase, uint16_t novaAltura){
    setBase(novaBase);
    setAltura(novaAltura);
}

uint16_t Retangulo::getBase() { return base; }

void Retangulo::setBase(uint16_t novaBase) {
    if (novaBase > 0) {
        base = novaBase;
    } else {
        base = 0;
    }
}

uint16_t Retangulo::getAltura() { return altura; }

void Retangulo::setAltura(uint16_t novaAltura) {
    if (novaAltura > 0) {
        altura = novaAltura;
    } else {
        altura = 0;
    }
}

int Retangulo::calcularArea(uint16_t base, uint16_t altura) {
    return base * altura;
}

int Retangulo::calcularPerimetro(uint16_t base, uint16_t altura) {
    return (base * 2) + (altura * 2);
}
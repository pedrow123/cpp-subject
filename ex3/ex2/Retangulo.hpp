#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include <cstdint>

class Retangulo {
   public:
    uint16_t getBase();
    void setBase(uint16_t novaBase);

    uint16_t getAltura();
    void setAltura(uint16_t novaAltura);

    int calcularArea(uint16_t base, uint16_t altura);
    int calcularPerimetro(uint16_t base, uint16_t altura);

   private:
    uint16_t base{0};
    uint16_t altura{0};
};
#endif
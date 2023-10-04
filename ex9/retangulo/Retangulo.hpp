#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include <cstdint>

class Retangulo {
   public:
    Retangulo(uint16_t novaBase = 10);
    Retangulo(uint16_t novaBase, uint16_t novaAltura);

    uint16_t getBase();
    void setBase(uint16_t novaBase);

    uint16_t getAltura();
    void setAltura(uint16_t novaAltura);

    int calcularArea(uint16_t base, uint16_t altura);
    int calcularPerimetro(uint16_t base, uint16_t altura);
    int getQtdeRet();

   private:
    static int qtdeRet;
    uint16_t base{0};
    uint16_t altura{0};
};
#endif
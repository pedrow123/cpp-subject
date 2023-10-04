#ifndef CURSO_HPP
#define CURSO_HPP

#include <string>

class Curso {
   public:
    Curso();
    Curso(std::string nomeCurso);
    Curso(std::string nomeCurso, uint16_t anoCriacao,
          uint16_t cargaHorariaMinima);
    std::string getNomeCurso();
    void setNomeCurso(std::string nomeCurso);
    uint16_t getAnoCriacao();
    void setAnoCriacao(uint16_t anoCriacao);
    uint16_t getCargaHorariaMinima();
    void setCargaHorariaMinima(uint16_t cargaHorariaMinima);

   private:
    std::string nomeCurso;
    uint16_t anoCriacao;
    uint16_t cargaHorariaMinima;
};
#endif
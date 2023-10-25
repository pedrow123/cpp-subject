#include "TelaDesenho.hpp"

void TelaDesenho::adicionarForma(Forma* const forma){
    this->formas.push_back(forma);
}

unsigned int TelaDesenho::calcularAreaTotal(){
    unsigned int result;
    std::list<Forma*>::iterator it;

	for(it = this->formas.begin(); it != this->formas.end(); it++){
        result += (*it)->calcularArea();
    }
    return result;

}
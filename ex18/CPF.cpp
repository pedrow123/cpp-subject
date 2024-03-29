#include "CPF.hpp"

#include "CPFInvalidoException.hpp"

using namespace ufpr;

CPF::CPF(const uint64_t numero) { this->setNumero(numero); }

uint64_t CPF::getNumero() const { return this->numero; }

void CPF::setNumero(const uint64_t numero) {
    if (!validarCPF(numero)) throw CPFInvalidoException{numero};
    this->numero = numero;
}

bool CPF::operator==(const CPF& outro) const {
	return this->numero == outro.numero;
}

bool CPF::operator!=(const CPF& outro) const {
	return this->numero != outro.numero;
}

bool CPF::operator<(const CPF& outro) const {
	return this->numero < outro.numero;
}

bool CPF::operator>(const CPF& outro) const {
	return this->numero > outro.numero;
}

bool CPF::operator<=(const CPF& outro) const {
	return this->numero <= outro.numero;
}

bool CPF::operator>=(const CPF& outro) const {
	return this->numero >= outro.numero;
}

std::istream& operator>>(std::istream& is, CPF& cpf) {
    uint64_t numero;
    is >> numero;
    cpf.setNumero(numero); // Você deve implementar um método setNumero que valide o CPF
    return is;
}

// Implementação do operador [] para acessar um dígito do CPF
unsigned short CPF::operator[](int idx) const {
    if (idx < 0 || idx > 10) {
        throw std::out_of_range("Índice fora dos limites para acesso aos dígitos do CPF.");
    }

    // Extrai o dígito correspondente ao índice
    uint64_t temp = this->numero;
    for (int i = 0; i < (10 - idx); i++) {
        temp /= 10;
    }

    return static_cast<unsigned short>(temp % 10);
}

bool CPF::validarCPF(uint64_t cpfTeste) const {
    unsigned int somatorioValidaUltimo;
    unsigned int modulo;
    unsigned int somatorioValidaPenultimo{0};
    unsigned int ultimo{(unsigned int)(cpfTeste % 10)};
    cpfTeste = cpfTeste / 10;
    unsigned int penultimo{(unsigned int)(cpfTeste % 10)};
    cpfTeste = cpfTeste / 10;

    somatorioValidaUltimo = penultimo * 2;
    for (int i{2}; i <= 11; i++) {
        modulo = cpfTeste % 10;
        cpfTeste = cpfTeste / 10;
        somatorioValidaPenultimo += modulo * i;
        somatorioValidaUltimo += modulo * (i + 1);
    }
    modulo = somatorioValidaPenultimo % 11;
    if (modulo < 2) {
        if (penultimo != 0) return false;  // cpf invalido
    } else {
        if (penultimo != 11 - modulo) return false;  // cpf invalido
    }
    modulo = somatorioValidaUltimo % 11;
    if (modulo < 2) {
        if (!ultimo) return false;  // cpf invalido
    } else {
        if (ultimo != 11 - modulo) return false;  // cpf invalido
    }
    return true;  // cpf valido
}
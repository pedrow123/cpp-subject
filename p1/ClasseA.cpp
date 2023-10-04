#include "ClasseA.hpp"

const int* ClasseA::minhaFunc(int* const par) const {
    *par = *par + 10;
    return new int{this->dado + *par};
}
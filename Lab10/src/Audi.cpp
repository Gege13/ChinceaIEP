#include "Audi.hpp"

void Audi::motor() {
    std::cout << "Diesel\n";
}

void Audi::model() {
    std::cout << "Quattro !!!!\n";
}

Audi::Audi() {}

int Audi::nrOfInstances = 0;

Audi * Audi::create() {
    if (nrOfInstances < 30) {
        nrOfInstances++;
        return new Audi();
    } else {
        return nullptr;
    }
}

Audi::~Audi() {
    decrement();
}

void Audi::decrement() {
    nrOfInstances--;
}

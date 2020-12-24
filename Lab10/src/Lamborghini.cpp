#include "Lamborghini.hpp"


Lamborghini::Lamborghini(): nrOfAudi(0) {}

Lamborghini * Lamborghini::instance = nullptr;

Lamborghini * Lamborghini::getInstance() {
    if (!instance)
        instance = new Lamborghini;
    return instance;
}

void Lamborghini::motor() {
    std::cout << "Petrol\n";
}

void Lamborghini::model() {
    std::cout << "Aventador\n";
}

Lamborghini & Lamborghini::operator+(const Audi &other) {
    Lamborghini::getInstance()->nrOfAudi++;
    Audi::decrement();
    return *Lamborghini::getInstance();
}

int Lamborghini::getAudi() {
    return nrOfAudi;
}

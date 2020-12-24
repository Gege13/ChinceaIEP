#include "Masina.hpp"
#include "Audi.hpp"

#ifndef IEP_Lamborghini_HPP
#define IEP_Lamborghini_HPP

class Lamborghini: public Masina
{
private:
    static Lamborghini * instance;
    int nrOfAudi;
    Lamborghini();
    Lamborghini(Lamborghini const&);
    void operator=(Lamborghini const&);
public:
    static Lamborghini * getInstance();
    void motor();
    void model();
    Lamborghini& operator+ (const Audi& other);
    int getAudi();
};

#endif 

#include "Masina.hpp"

class Audi: public Masina
{
private:
    static int nrOfInstances;
    Audi();
public:
    ~Audi();
    void motor();
    void tractiune();
    static Audi * create();
    static void decrement();
};


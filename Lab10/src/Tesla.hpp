#include "Masina.hpp"

class Tesla: public Masina
{
private:
    const std::list<std::string>& words;
public:
    Tesla(const std::list<std::string>& words);
    void motor();
    void model();
};


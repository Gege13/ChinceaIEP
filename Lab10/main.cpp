#include "src/Tesla.hpp"
#include "src/Lamborghini.hpp"

int main() {

    std::list<std::string> words;

    words.push_back("S");
    words.push_back("3");
    words.push_back("X");
    words.push_back("Y");

    Masina *m1 = new Tesla(words);

    m1->model();
    m1->motor();

    Audi* a = Audi::create();

    a->motor();
    a->model();

    Lamborghini * l = Lamborghini::getInstance();

    l->model();
    l->motor();

    std::cout << "\n Audiuri: " << l->getAudiuri() << "\n";

    Lamborghini & l2 = *l + *a;

    std::cout << "\n Audiuri: " << l->getAudiuri() << "\n";

    return 0;
}

#include "Tesla.hpp"

Tesla::Tesla(const std::list<std::string>& words): words(words) {}

void Tesla::model() {
    std::cout << '\n';
    for (auto const& i : words) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

void Tesla::motor() {
    std::cout << "Electric \n";
}

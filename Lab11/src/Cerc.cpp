#include "Cerc.hpp"
using namespace std;
Cerc* Cerc::instance = nullpt;

Cerc* Cerc::getInstance(Point& p, float raza) {
    if (instance == nullpt) {
        instance = new Cerc(p, raza);}
    return instance;};
Cerc::Cerc(Point& p, float raza):p(p), raza(raza) {};
Point & Cerc::getPoint() const {
    return p;};
float Cerc::getRaza() const {
    return raza;};

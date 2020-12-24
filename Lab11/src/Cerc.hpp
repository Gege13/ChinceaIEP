#ifndef IEP_CERC_HPP
#define IEP_CERC_HPP
#include "./Point.hpp"
using namespace std;
class Cerc {
private:
    Point& p;
    static Cerc* instance;
    float raza;
    Cerc(Point& p, float raza);
public:
    static Cerc* getInstance(Point& p, float raza);
    Point& getPoint() const;
    float getRaza() const;};
#endif //IEP_CERC_HPP

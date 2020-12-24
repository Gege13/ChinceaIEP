#ifndef IEP_PENTAGON_HPP
#define IEP_PENTAGON_HPP
#include "./Figura.hpp"
using namespace std;
class Pentagon: public Figura{
    public:
        Pentagon(vector<Point>& points);
        float perimetru();};
#endif //IEP_PENTAGON_HPP

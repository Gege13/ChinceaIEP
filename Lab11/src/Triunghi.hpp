#ifndef IEP_TRIUNGHI_HPP
#define IEP_TRIUNGHI_HPP
#include "./Figura.hpp"
using namespace std;
class Triunghi: public Figura {
    public:
        Triunghi(vector<Point>& points);
        float perimetru();};
#endif //IEP_TRIUNGHI_HPP

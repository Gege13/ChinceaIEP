#ifndef IEP_FIGURA_HPP
#define IEP_FIGURA_HPP
#include<vector>
#include "./Point.hpp"
using namespace std;
class Figura {
    protected:
        vector<Point>& points;
    public:
        Figura(vector<Point>& points);
        virtual float perimetru() = 0;
        vector<Point>& getPoints() const;};
#endif //IEP_FIGURA_HPP

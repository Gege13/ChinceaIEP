#include "./Figura.hpp"
using namespace std;
Figura::Figura(vector<Point>& points): points(points) {};
vector<Point>& Figura::getPoints() const {
    return points;}

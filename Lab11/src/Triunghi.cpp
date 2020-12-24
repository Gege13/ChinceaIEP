#include "./Triunghi.hpp"
using namespace std;
Triunghi::Triunghi(vector<Point>& points): Figura(points) {};

float Triunghi::perimetru() {
    Point& p1 = points[0];Point& p2 = points[1];Point& p3 = points[2];
    return distantaDintrePuncte<Point>(p1, p2) +distDintrePcte<Point>(p2, p3) +distDintrePcte<Point>(p3, p1);};

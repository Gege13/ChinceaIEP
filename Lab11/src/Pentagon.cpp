#include "Pentagon.hpp"
using namespace std;
Pentagon::Pentagon(vector<Point>& points): Figura(points) {};

float Pentagon::perimetru() {
    Point& p1 = points[0];Point& p2 = points[1];Point& p3 = points[2];Point& p4 = points[3];Point& p5=points[4];
    return  distDintrePcte<Point>(p1, p2) +distDintrePcte<Point>(p2, p3) +distDintrePcte<Point>(p3, p4) +
            distDintrePcte<Point>(p4, p5) +distDintrePcte<Point>(p5, p1);};

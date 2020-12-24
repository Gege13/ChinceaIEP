#ifndef IEP_POINT_HPP
#define IEP_POINT_HPP
#include <iostream>
#include <math.h>
using namespace std;
class Point {
    private:
        float x;
        float y;
    public:
        Point(float x, float y);
        float getX() const;
        float getY() const;};
#endif //IEP_POINT_HPP

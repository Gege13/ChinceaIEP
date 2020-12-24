#include <iostream>
#include "./src/Cerc.hpp"
#include "./src/Triunghi.hpp"
#include "./src/Pentagon.hpp"
using namespace std;
int main() {
    Point p1(20, 40);
    Cerc* cerc = Cerc::getInstance(p1, 20);

    Point p2(4, 4);
    Point p3(35, 7);
    Point p4(50, -5);
    Point p5(25, 5);

    vector<Point> penPoints;

    penPoints.push_back(p1);
    penPoints.push_back(p2);
    penPoints.push_back(p3);
    penPoints.push_back(p4);
    penPoints.push_back(p5);

    Pentagon pen(penPoints);

    
    vector<Point> triPoints;

    triPoints.push_back(p1);
    triPoints.push_back(p2);
    triPoints.push_back(p3);

    Triunghi tr1(triPoints);

    cout << "OK" << endl;

    cout << "Se gaseste in cerc: " << inCerc(cerc, tr1) << endl;
    cout << "Se gaseste in cerc: " << inCerc(cerc, pat) << endl;
    cout << "Se gaseste in cerc: " << inCerc(cerc, pen) << endl;

    return 0;
}

#include <stdlib.h>

#include <iostream>
#include <string>

using namespace std;

class Shapes {
   public:
    // Double inputs
    float area(double r) {
        return 3.141592 * (r * r);
    }
    int area(int length, int width) {
        return length * width;
    }
    float area(double base, double height) {
        return (base * height) / 2;
    }
};

int main() {
    // Test program
    Shapes shapes;
    double traingleBase = 12.1233, triangleHeight = 13.142;
    int rectangleLen = 9, rectangleWidth = 4;
    double circleRadius = 9.99;
    float triangleTest = shapes.area(traingleBase, triangleHeight);
    float rectangleTest = shapes.area(rectangleLen, rectangleWidth);
    float circleTest = shapes.area(circleRadius);
    cout << "\n"
         << "Test results are as follows:"
         << "\n"
         << "Traingle Area is = " << triangleTest
         << "\n"
         << "Rectangle Area is = " << rectangleTest
         << "\n"
         << "Circle area is = " << circleTest
         << "\n\n";

    return 9;
}

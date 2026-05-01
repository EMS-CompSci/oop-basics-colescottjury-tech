#include <iostream>
#include <string>
#include<cmath>

class Point {

private:
    double x;
    double y;

public:
    Point(double initialX, double initialY) {
        x = initialX;
        y = initialY;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double distanceTo(Point otherPoint){
        return pow(pow(otherPoint.getX() - x, 2) + pow(otherPoint.getY() - y, 2), 0.5);
    }

    std::string toString() {
        return "(" + std::to_string(x) + ", "
                   + std::to_string(y) + ")";
    }



};  


int main() {

    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);

    std::cout << "Point?" << std::endl;
    
    std::cout << "X: ";
    double xVal;
    double yVal;
    std::cin >> xVal;
    std::cout << "Y: ";
    std::cin >> yVal;

    Point userPoint(xVal, yVal);

    std::cout << "p1 = " << p1.toString() << std::endl;
    std::cout << "p2 = " << p2.toString() << std::endl;
    std::cout << "User = " << userPoint.toString() << std::endl;


    std::cout << "distance = " << p1.distanceTo(p2) << std::endl;


    std::cout << "p2.x = " << p2.getX() << std::endl;
    std::cout << "p2.y = " << p2.getY() << std::endl;



    return 0;
}

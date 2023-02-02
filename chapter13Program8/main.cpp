#include <iostream>

using namespace std;

class Circle {
    double radius;
    double pi=3.14159;

public:
    Circle() {
        radius = 0;
    }

    Circle(double x) {
        radius = x;
    }

    void setRadius(int y) {
        radius= y;
    }

    double getRadius(double x) {
        radius = x;
    }

    double getArea() {
        double area = pi * radius * radius;
        return area;
    }

    double getDiameter() {
        double diameter = radius * 2;
        return diameter;
    }

    double getCircumference(){
        double circumference=2*pi*radius;
        return circumference;
    }

};

int main() {
    double z;
    double area;
    double diameter;
    double circumference;
    cout<<"Please enter a radius of a circle: "<<endl;
    cin>>z;
    Circle circle1(z);
    area=circle1.getArea();
    diameter=circle1.getDiameter();
    circumference=circle1.getCircumference();
    cout<<"Area is: "<<area<<endl;
    cout<<"Diameter is: "<<diameter<<endl;
    cout<<"Circumference is: "<<circumference<<endl;
    return 0;
}



// 感觉没啥大问题 很棒；删掉h
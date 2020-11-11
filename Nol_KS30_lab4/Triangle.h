#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    double a_length;
    double b_length;
    double c_length;

public:
    Triangle() {}
    Triangle(double a, double b, double c);
    ~Triangle();

    double getPerimeter()
    {
        return a_length + b_length + c_length;
    }

    double getArea()
    {
        return sqrt((getPerimeter() / 2) * ((getPerimeter() / 2) - a_length) * ((getPerimeter() / 2) - b_length) * ((getPerimeter() / 2) - c_length));
    }

    void getInfo()
    {
        cout.precision(2);
        cout << "TYPE : TRIANGLE" << endl;
        cout << fixed << "Length:" << endl;
        cout << fixed << "A: " << a_length << endl;
        cout << fixed << "B: " << b_length << endl;
        cout << fixed << "C: " << c_length << endl;

        cout << endl
             << "Perimeter: " << getPerimeter() << endl
             << "Area: " << getArea() << endl
             << endl;
    }
};

Triangle::Triangle(double a, double b, double c)
{
    this->a_length = a;
    this->b_length = b;
    this->c_length = c;
}

Triangle::~Triangle()
{
}

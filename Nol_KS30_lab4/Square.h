#include <iostream>
#include <cmath>
using namespace std;

class Square
{
private:
    double a_length;
    double b_length;

public:
    Square() {}
    Square(double a, double b);
    ~Square();

    double getPerimeter()
    {
        return (a_length + b_length) * 2;
    }

    double getArea()
    {
        return a_length * b_length;
    }

    void getInfo()
    {
        cout.precision(2);
        cout << "TYPE : SQUARE" << endl;
        cout << fixed << "Length:" << endl;
        cout << fixed << "A: " << a_length << endl;
        cout << fixed << "B: " << b_length << endl;

        cout << endl
             << "Perimeter: " << getPerimeter() << endl
             << "Area: " << getArea() << endl
             << endl;
    }
};

Square::Square(double a, double b)
{
    this->a_length = a;
    this->b_length = b;
}

Square::~Square()
{
}

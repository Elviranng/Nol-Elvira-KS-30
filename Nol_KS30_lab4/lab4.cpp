#include <iostream>
#include "Triangle.h"
#include "Square.h"

using namespace std;

int main()
{
    const int AMOUNT = 2;

    Triangle triangles[AMOUNT];
    Square sqares[AMOUNT];

    for (int i = 0; i < AMOUNT; i++)
    {
        triangles[i] = Triangle((1 + (double)rand() / RAND_MAX) * 10, (1 + (double)rand() / RAND_MAX) * 10, (1 + (double)rand() / RAND_MAX) * 10);
        sqares[i] = Square((1 + (double)rand() / RAND_MAX) * 10, (1 + (double)rand() / RAND_MAX) * 10);

        triangles[i].getInfo();
        sqares[i].getInfo();
    }
}
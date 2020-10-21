#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stddef.h>

using namespace std;

struct Complex
{
    double real;
    double imag;
};

int randInt(int a, int b)
{
    int result = a + (rand() % b);
    return result;
}

void fillArray(Complex *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        arr[i].real = ((double)rand() / RAND_MAX) * 100;
        arr[i].imag = ((double)rand() / RAND_MAX) * 100;
    }
}
void printNumbers(Complex *arr, int n)
{
    cout.precision(2);
    for (int i = 0; i < n; i++)
    {
        cout << fixed << arr[i].real << " + " << arr[i].imag << "i" << endl;
    }
}

void getSum(Complex *arr, int n)
{
    Complex sum;
    sum.real = 0;
    sum.imag = 0;

    for (int i = 0; i < n; i++)
    {
        sum.imag += arr[i].imag;
        sum.real += arr[i].real;
    }

    cout << "SUM : " << sum.real << " + " << sum.imag << "i" << endl
         << endl;
}

void getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << endl
         << "SUM : " << sum << endl;
}

int main()
{
    cout.precision(0);
    const int AMOUNT = 4;
    Complex *numbers = new Complex[AMOUNT];

    fillArray(numbers, AMOUNT);
    printNumbers(numbers, AMOUNT);
    getSum(numbers, AMOUNT);

    int a[AMOUNT] = {0};
    for (int i = 0; i < AMOUNT; i++)
    {
        a[i] = rand() % 25;
        cout << a[i] << "\t";
    }
    getSum(a, AMOUNT);
    delete[] numbers;
}

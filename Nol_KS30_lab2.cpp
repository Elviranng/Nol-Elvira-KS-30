#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fill_c(double **a, double **b, double *c, int n)
{
    cout.precision(2);
    cout << "Array C:" << endl;
    for (int i = 0; i < n; i++)
    {
        double sum_a = 0;
        double sum_b = 0;
        for (int j = 0; j < n; j++)
        {
            sum_a += a[i][j];
            sum_b += b[i][j];
        }
        *(c + i) = (sum_a > sum_b) ? sum_a : sum_b;
        cout << fixed << c[i] << " ";
    }
    cout << endl;
    system("pause");
}

int main()
{
    cout.precision(2);

    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    // Инициализация A
    cout << "Array A:" << endl;
    double **a = new double *[n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new double[n];
        for (int j = 0; j < n; j++)
        {
            a[i][j] = ((double)rand() / RAND_MAX) * 10;
            cout << fixed << a[i][j] << " ";
        }
        cout << endl;
    }

    // Инициализация B
    cout << endl
         << "Array B:" << endl;
    double **b = new double *[n];
    for (int i = 0; i < n; ++i)
    {
        b[i] = new double[n];
        for (int j = 0; j < n; j++)
        {
            b[i][j] = ((double)rand() / RAND_MAX) * 10;
            cout << fixed << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Инициализация C
    double *c;
    c = new double[n];

    fill_c(a, b, c, n);

    // Удаление массивов
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
        delete[] b[i];
    }

    delete[] a;
    delete[] b;
    delete[] c;
    
    return 0;
}

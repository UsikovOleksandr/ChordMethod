#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double function(double x)
{
    return pow(x, 3) - 2 * pow(x, 2) - 11 * x + 12;
}
double function1(double x)
{
    return 3 * pow(x, 2) - 4 * x - 11;
}

int main()
{
    int iterator = 0;

    double next, x, rez = 7, eps = 0.000001;

    for (;;) {
        next = rez - (function(rez) / function1(rez));
        if ((rez - next) > eps);
        else break;
        rez = next;
        iterator++;
    }

    cout << "Eps = " << eps << endl;
    cout << "Iterations = " << iterator << endl;
    cout << "Function = " << rez << endl;

    return 0;
}
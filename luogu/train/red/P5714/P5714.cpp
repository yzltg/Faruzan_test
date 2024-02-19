#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
double m, h, BMI;
int main()
{
    cin >> m >> h;
    BMI = m * 1.0 / (h * h);
    if (BMI < 18.5)
        cout << "Underweight";
    else if (BMI < 24)
        cout << "Normal";
    else
    {
        cout << BMI << endl
             << "Overweight";
    }
    return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int h, r, num;
    double v;
    scanf("%d%d", &h, &r);
    v = r * r * 3.14 * h;
    num = ceil(20000 / v * 1.0);
    printf("%d", num);
    return 0;
}
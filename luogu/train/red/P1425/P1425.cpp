#include <iostream>
#include <cstdio>
using namespace std;
int a, b, c, d;
int all;
int main()
{
    scanf("%d%d%d%d", &a, &b, &c, &d);
    all = c * 60 + d - a * 60 - b;
    printf("%d %d", all / 60, all % 60);
    return 0;
}
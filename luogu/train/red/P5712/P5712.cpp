#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int x;
    cin >> x;
    printf("Today, I ate %d apple", x);
    if (x > 1)
        printf("s.");
    else
        printf(".");
    return 0;
}
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n, tn = 1, day = 0;
    scanf("%d", &n);
    int m = n;
    while ((m - 1) % 3 != 0)
    {
        tn++;
        m = m - (m - 1) / 3 - 1;
    }
    while (n)
    {
        day++;
        n = n - (n - 1) / 3 - 1;
    }
    printf("%d %d", day, tn);
    return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int n;
bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    cin >> n;
    for (int i = 4; i <= n; i += 2)
    {
        for (int x = 2; x <= i / 2; x++)
            if (check(x) && check(i - x))
            {
                printf("%d=%d+%d\n", i, x, i - x);
                break;
            }
    }
    return 0;
}
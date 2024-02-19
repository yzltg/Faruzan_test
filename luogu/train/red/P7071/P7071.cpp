#include <iostream>
#include <cmath>
using namespace std;
int n, a[31], idx;
void tfri(int b)
{
    int res = 0;
    while (b)
    {
        if (b & 1)
            a[res] = pow(2, res);
        res++;
        b = b >> 1;
    }
    idx = res;
}
int main()
{
    cin >> n;
    if (n % 2 == 1 || n == 0)
    {
        cout << "-1";
        return 0;
    }
    tfri(n);
    for (int i = idx; i > 0; i--)
    {
        if (a[i] != 0)
            cout << a[i] << " ";
    }
    return 0;
}
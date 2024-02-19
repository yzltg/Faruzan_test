#include <iostream>
using namespace std;
int n, t;
int main()
{
    cin >> n;
    if (n % 2 == 0)
        t++;
    if (n > 4 && n <= 12)
        t++;
    if (t == 2)
        cout << "1 1 0 0";
    else if (t == 1)
        cout << "0 1 1 0";
    else
        cout << "0 0 0 1";
    return 0;
}
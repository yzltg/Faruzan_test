#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    long long ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
        if (ans > 1e9)
        {
            cout << -1;
            return 0;
        }
    }
    cout << ans;
    return 0;
}
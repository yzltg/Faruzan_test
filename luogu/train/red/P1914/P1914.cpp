#include <iostream>
using namespace std;
string a, ans;
int n;
int main()
{
    cin >> n >> a;
    for (int i = 0; i < a.size(); i++)
    {
        int mid = (int)(a[i] - 'a') + n;
        ans += (char)mid % 26 + 'a';
    }
    cout << ans;
    return 0;
}
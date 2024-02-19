#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int n, cnt;
bool a[120];
string s;
int main()
{
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            cnt++;
            a[i] = a[i + 1] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0 && a[i + 1] == 0 && s[i] == s[i + 1])
        {
            cnt++;
            printf("%d", cnt);
            return 0;
        }
    }
    printf("%d", cnt);
    return 0;
}
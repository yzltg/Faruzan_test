#include <iostream>
using namespace std;
int a;
int main()
{
    char s[8];
    fgets(s, 9, stdin);
    for (int i = 0; i <= 7; i++)
    {
        if (s[i] == '1')
            a++;
    }
    cout << a;
    return 0;
}
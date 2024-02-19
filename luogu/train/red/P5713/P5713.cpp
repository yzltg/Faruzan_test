#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    cout << (5 * n > 11 + 3 * n ? "Luogu" : "Local");
    return 0;
}
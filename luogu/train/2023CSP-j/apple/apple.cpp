#include <iostream>
#include <cstdio>
int n,tn=1,day=0,k;
using namespace std;
void solve(){
    scanf("%d",&n);
    while (n){
        if ((n-1)%3!=0&&k==0)tn++;
        else k=1;
        day++;
        n=n-(n-1)/3-1;
    }
    printf("%d %d",day,tn);
}
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("apple.in", "r", stdin);
    freopen("apple.out", "w", stdout);
    solve();
    return 0;
}
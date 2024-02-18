#include <iostream>
#include <cstring>
using namespace std;
const int N=13;
int f[N],d[N];
void solve(){
    memset(f,0x3f,sizeof(f));
    f[1]=1,d[1]=1;
    for(int i=2;i<=12;i++) d[i]=d[i-1]*2+1;
    cout<<f[1]<<endl;
    for(int i=2;i<=12;i++)
    {
        for(int j=1;j<=i;j++)
            f[i]=min(f[j]*2+d[i-j],f[i]);
        cout<<f[i]<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
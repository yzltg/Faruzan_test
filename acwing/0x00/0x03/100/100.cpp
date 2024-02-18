#include <iostream>
#include <cmath>
#define int long long 
using namespace std;
const int N=1e5+5;
int n,a[N],pos,neg;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=n;i>1;i--) a[i]=a[i]-a[i-1];
    for(int i=2;i<=n;i++){
        if(a[i]>=0) pos+=a[i];
        else neg-=a[i];
    }
    cout<<min(pos,neg)+abs(pos-neg)<<endl<<abs(pos-neg)+1<<endl;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
//已知有四种取i,j的方案
//定义差分序列b[n]
//1.2<=i,j<=n 
//    1.b[i]-=1,b[j+1]+=1;
//    2.b[i]+=1,b[j+1]-=1;
//2.
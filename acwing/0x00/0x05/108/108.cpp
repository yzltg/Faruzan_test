#include <iostream>
#define int long long
using namespace std;
const int N=3e5;
int n,map1[N],map2[N],kx,ky;
void solve(){
    for(int i=1,x;i<=n;i++){
        cin>>x;
        if(x!=0)map1[++kx]=x;
    }
    for(int i=1,x;i<=n;i++){
        cin>>x;
        if(x!=0) map2[++ky]=x;
    }
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    while(cin>>n) solve();
    return 0;
}
#include <iostream>
using namespace std;
const int N=5e6+5;
int n,p,a[N],ans=2e9+5,diff[N];
void solve(){
    cin>>n>>p;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        diff[i]=a[i]-a[i-1];
    for(int i=1,x,y,z;i<=p;i++){
        cin>>x>>y>>z;
        diff[x]+=z;diff[y+1]-=z;
    }
    for(int i=1;i<=n;i++){
        a[i]=a[i-1]+diff[i];
        ans=min(ans,a[i]);
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
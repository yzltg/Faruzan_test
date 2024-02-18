#include <iostream>
#include <cmath>
using namespace std;
const int N=1e5+5;
long long n,d,v[N],a[N],w,x=N,tv,allv,gv;
void solve(){
    cin>>n>>d;
    for(int i=1;i<=n-1;i++) cin>>v[i],allv+=v[i];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1,v1;i<n;i++)
    {
        gv+=v[i];
        x=min(x,a[i]);
        v1=ceil((gv-tv*d)*1.0/d);
        tv+=v1;
        w+=x*v1;
    }
    cout<<w;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("road.in","r",stdin);
    freopen("road.out","w",stdout);
    solve();
    return 0;
}
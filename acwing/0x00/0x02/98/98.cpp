#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
int t;
pll calc(ll x,ll y)
{
    if(x==0) return {0,0};
    ll len=1ll<<(x-1),cnt=1ll<<(2*x-2);
    auto pos=calc(x-1,y%cnt);
    auto x1=pos.first,y1=pos.second;
    auto z=y/cnt;
    if(z==0)return {y1,x1};
    if(z==1)return {x1,y1+len};
    if(z==2)return {x1+len,y1+len};
    return {2*len-y1-1,len-x1-1};
}
void solve()
{
    ll N,a,b;
    cin>>N>>a>>b;
    auto ac=calc(N,a-1);
    auto bc=calc(N,b-1);
    double x=ac.first-bc.first,y=ac.second-bc.second;
    printf("%.0lf\n",sqrt(x*x+y*y)*10);
}
int main()
{
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
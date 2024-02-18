#include <iostream>
#include <cstdio>
#include <cmath>
#define int long long
#define pll pair<int,int>
using namespace std;
int n,N,a,b;
pll calc(int x,int y){
    if(x==0) return make_pair(0,0);
    int len=1ll<<x-1,cnt=1ll<<2*x-2;
    auto pos=calc(x-1,y%cnt);
    int x1=pos.first,y1=pos.second;
    if(y==0||y-1/cnt==0) return make_pair(y1,x1);
    else if(y-1/cnt==1) return make_pair(x1+len,y1);
    else if(y-1/cnt==2) return make_pair(x1+len,y1+len);
    return make_pair(2*len-1-y1,len-1-x1);
}
void solve(){
    scanf("%lld%lld%lld",&N,&a,&b);
    auto ac=calc(N,a),bc=calc(N,b);//ac=calc(N,a-1),bc=calc(N,b-1);
    double x2=ac.first-bc.first,y2=ac.second-bc.second;
    printf("%.0lf\n",sqrt(x2*x2+y2*y2)*10);
}
signed main(){
    scanf("%lld",&n);
    while(n--){
        solve();
    }
    return 0;
}    
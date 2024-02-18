#include <iostream>
#define ll long long
using namespace std;
ll mul(ll a,ll b,ll c){
    ll ans=0;
    while(b){
        if(b&1) ans=(a+ans)%c;
        a=a*2%c;
        b>>=1;
    }
    return ans;
}
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<mul(a,b,c);
}
int main(){
    solve();
    return 0;
}
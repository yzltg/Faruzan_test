//¿ìËÙÃİÄ£°æ
#include <iostream>
using namespace std;
int a,b,mod;
int quickpow(int x,int y){
    x%=mod;
    int ans=1;
    while(y){
        if(y&1) ans=ans*x%mod;
        x=x*x%mod;
        y>>=1;
    }
    return ans;
}
void solve(){
    cin>>a>>b>>mod;
    cout<<quickpow(a,b)<<"\n";
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
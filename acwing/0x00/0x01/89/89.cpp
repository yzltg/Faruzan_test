#include <iostream>
using namespace std;
#define ll long long
long long a,b,p;
void ans(ll a,ll b,ll c){
    long long m=1%p;
    while(b){ 
        if(b&1) m=(ll)m*a%p;
        a=(ll)a*a%p;
        b>>=1; 
    }
    cout<<m;
}
void solve(){
    cin>>a>>b>>p;
    ans(a,b,p);
}
int main(){
    solve();
    return 0;
}
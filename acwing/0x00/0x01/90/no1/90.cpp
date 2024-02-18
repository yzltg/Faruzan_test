#include <iostream>
typedef unsigned long long ull;
using namespace std;
ull ans(ull a,ull b,ull c){
    a%=c,b%=c;
    ull d=(long double)a*b/c;
    ull x=a*b,y=d*c;
    long long ans=(long long)x%c-(long long)y%c;
    return ans;
}
void solve(){
    ull a,b,p;
    cin>>a>>b>>p;
    cout<<ans(a,b,p);
}
int main(){
    solve();
    return 0;
}
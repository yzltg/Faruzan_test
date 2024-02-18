/*
a=p1^k1*p2^k2*...+pn^kn
a^b=p1^(k1*b)*p2^(k2*b)*...*pn^(kn*b)
res(a)=(p1^0+p1^1+p1^2+...+p1^k1)*...*(pn^0+pn^1+pn^2+...+pn^kn)
Çópx^0+px^1+...+px^kx
1. kx%2==0
px*(px^0+px^1+...+px^kx-1)+1
2.
px^0+px^1+...+px^kx
=px^0+px^1+...+px^(k/2)+px^(k/2+1)+...+px^k
=(px^0+px^1+...+px^(k/2))+px^(k+1/2)*(px^0+px^1+...+px^(k/2))
=px^(k+1/2+1)*(px^0+px^1+...+px^(k/2))
sum(px,kx)
1.k%2==0 return  px%mod*sum(px,kx-1)+1
2.return px^(k+1/2+1)*sum(px^0+...+px^(k-1/2))
3.k==0 return 1
*/
#include <iostream>
using namespace std;
const int mod=9901;
int a,b;
int qmi(int x,int y){
    x%=mod;
    int ans=1;
    while(y){
        if(y&1) ans=ans*x%mod;
        x=x*x%mod;
        y>>=1;
    }
    return ans;
}
int sum(int x,int y){
    if(y==0) return 1;
    else if(y%2==0) return (x%mod*(sum(x,y-1))+1)%mod;
    return (qmi(x,(y+1)/2)+1)%mod*(sum(x,y/2))%mod;
}
void solve(){
    cin>>a>>b;
    if(a==0){
        cout<<0;
        return;
    }
    int res=1;
    for(int i=2;i<=a;i++){
        int s=0;
        while(a%i==0){
            s++;
            a/=i;
        }
        res=res*sum(i,s*b)%mod;
    }
    cout<<res<<"\n";
    return;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
#include <iostream>
using namespace std;
const int mod=9901;
int a,b;
int qmi(int x,int y){
    a%=mod;//x%=mod
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
    else if(y%2==0) return (x%mod*sum(x,y-1)+1)%mod;
    return (qmi(x,(y+1)/2)+1)*sum(x,(y-1)/2);
}
void solve(){
    cin>>a>>b;
    int res=1;
    for(int i=2;i<=a;i++)
    {
        int s=0;
        while(a%i==0){
            a/=i;
            s++;
        }
        res=res*sum(i,s*b)%mod;
    }
    cout<<res;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
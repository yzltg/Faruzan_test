#include <iostream>
#include <algorithm>
using namespace std;
int t,m;
int ti(int n){
    for(int i=2;i*i<=n;i++){
        if(n%(i*i)==0) return i*ti(n/(i*i));
    }
    return 1;
}
int gcd(int a,int b){
    return b?gcd(b,a%b):a;
}
void solve(){
    int a,b,c,delta;
    cin>>a>>b>>c;
    if(a<0) a=-a,b=-b,c=-c;
    delta=b*b-4*a*c;
    if(delta<0) {cout<<"NO"<<endl;return;}
    int k=ti(delta);
    if(k*k==delta){
        int f=abs(gcd(2*a,-b+k));
        cout<<(-b+k)/f;
        if(2*a/f!=1) cout<<"/"<<2*a/f;
        cout<<endl;
        return;
    }
    if(delta==0){
        int f=abs(gcd(2*a,-b));
        cout<<-b/f;
        if(2*a/f!=1) cout<<"/"<<2*a/f;
        cout<<endl;
        return;
    }
    int f=abs(gcd(-b,2*a));
    if(b==0){
        f=abs(gcd(k,2*a));
        if(k/f!=1) cout<<k/f<<"*";
        cout<<"sqrt("<<delta/(k*k)<<")";
        if(2*a/f!=1) cout<<"/"<<2*a/f;
        cout<<endl;
        return;
    }
    cout<<-b/f;
    if(2*a/f!=1) cout<<"/"<<2*a/f;
    cout<<"+";
    f=abs(gcd(k,2*a));
    if(k/f!=1) cout<<k/f<<"*";
    cout<<"sqrt("<<delta/(k*k)<<")";
    if(2*a/f!=1) cout<<"/"<<2*a/f;
    cout<<endl;
    return;
}
int main(){
    freopen("uqe.in","r",stdin);
    freopen("uqe.out","w",stdout);
    cin>>t>>m;
    while(t--){
        solve();
    }
    return 0;
}
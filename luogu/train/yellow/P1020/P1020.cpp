#include <iostream>
#include <cstring>
using namespace std;
const int INF=2147483647,MAXN=1e5+3;
int n,t,H[MAXN],F[MAXN];
void solve(){
    while(cin>>H[++n]);
    --n;
    t=0;
    memset(F,0,sizeof(F));
    F[0]=INF;
    for(int i=1;i<=n;i++){
        int l=0,r=t+1;
        while(r-l>1){
            int m=l+(r-l)/2;
            if(F[m]>=H[i]) l=m;
            else r=m;
        }
        int x=l+1;
        if(x>t) t=x;
        F[x]=H[i];
    }
    cout<<t<<"\n";
    t=0;
    memset(F,0,sizeof(F));
    F[0]=0;
    for(int i=1;i<=n;i++){
        int l=0,r=t+1;
        while(r-l>1){
            int m=l+(r-l)/2;
            if(F[m]<H[i]) l=m;
            else r=m;
        }
        int x=l+1;
        if(x>t) t=x;
        F[x]=H[i];
    }
    cout<<t;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
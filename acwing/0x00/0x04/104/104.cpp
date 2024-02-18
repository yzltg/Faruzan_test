#include <iostream>
using namespace std;
const int NUM=1e5+5;
int N,F;
double cows[NUM],sum[NUM];
void pre_sum(double mid){
    for(int i=1;i<=N;i++)
        sum[i]=sum[i-1]+cows[i]-mid;
}
bool cheak(double mid){
    pre_sum(mid);
    double min_val=1e10,ans=-1e10;
    for(int i=F;i<=N;i++){
        min_val=min(min_val,sum[i-F]);
        ans=max(ans,sum[i]-min_val);
    }
    if(ans>=0) return true;
    return false;
}
void solve(){
    cin>>N>>F;
    for(int i=1;i<=N;i++) cin>>cows[i];
    double l=0,r=2000;
    while(r-l>1e-5){
        double mid=(l+r)/2;
        if(cheak(mid)) l=mid;
        else r=mid;
    }
    cout<<int(r*1000)<<endl;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
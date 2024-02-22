#include <iostream>
using namespace std;
const int N=125;
int n,num[N][N];
void pre_sum(){
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            num[i][j]+=num[i][j-1];
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>num[i][j];
    pre_sum();
    int res1=-2e6,ans=-2e6;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            int res=0;
            for(int k=1;k<=n;k++){
                res+=num[k][i]-num[k][j];
                res1=max(res1,res);
                if(res<0) res=0;
            }
        }
        ans=max(ans,res1);
    }
    cout<<ans;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
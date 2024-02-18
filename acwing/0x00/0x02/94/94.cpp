#include <iostream>
#include <vector>
using namespace std;
const int N=15;
int n,a[N],f[N];
void dfs(int x){
    if(x==n+1){
        for(int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!f[i])
        {
            a[x]=i,f[i]=1;
            dfs(x+1);
            f[i]=0;
        }
    }
}
void solve(){
    cin>>n;
    dfs(1);
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
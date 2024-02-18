//深搜版本
#include <iostream>
using namespace std;
int m,n,a[50];
void dfs(int x,int y){
    if(a[1]>(n-1)/2+1) return;
    if(x==m+1){
        for(int i=1;i<=m;i++) cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=y;i<=n;i++){
        a[x]=i;
        dfs(x+1,i+1);
    }
}
void solve(){
    cin>>n>>m;
    dfs(1,1);
    return;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
//深搜
#include <iostream>
using namespace std;
int n,a[25];
void dfs(int x,int y){
    for(int i=y;i<=n;i++){
        a[x]=i;
        dfs(x+1,i+1);
        for(int i=1;i<=x;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return;
}
void solve(){
    cin>>n;
    cout<<endl;
    dfs(1,1);
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
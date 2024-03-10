#include <iostream>
using namespace std;
const int N=1005;
int n,m,diff[N][N],ans[N][N];
void solve(){
    cin>>n>>m;
    for(int i=1,x1,y1,x2,y2;i<=m;i++){
        cin>>x1>>y1>>x2>>y2;
        diff[x1][y1]++;
        diff[x1][y2+1]--;
        diff[x2+1][y1]--;
        diff[x2+1][y2+1]++;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            ans[i][j]=ans[i-1][j]+ans[i][j-1]-ans[i-1][j-1]+diff[i][j];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
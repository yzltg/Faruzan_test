#include <iostream>
using namespace std;
const int N=5005;
int n,r,len1,len2,map[N][N],ans;
void solve(){
    cin>>n>>r;
    r=min(5001,r);
    len1=len2=r;
    for(int i=1,x,y,u;i<=n;i++){
        cin>>x>>y>>u;
        map[++x][++y]+=u;
        len1=max(len1,x),len2=max(len2,y);
    }
    for(int i=1;i<=len1;i++)
        for(int j=1;j<=len2;j++)
        map[i][j]+=map[i-1][j]+map[i][j-1]-map[i-1][j-1];
    for(int i=r;i<=len1;i++)
        for(int j=r;j<=len2;j++)
            ans=max(ans,map[i][j]-map[i-r][j]-map[i][j-r]+map[i-r][j-r]);
    cout<<ans;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;
const int N=25,M=(1<<20)+5;
int n,f[M][N],w[N][N];
void solve(){
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>w[i][j];
    memset(f,0x3f,sizeof(f));
    f[1][0]=0;
    for(int i=0;i<1<<n;i++)
        for(int j=0;j<n;j++)
            if(i>>j&1) 
                for(int k=0;k<n;k++)
                    f[i][j]=min(f[i][j],f[i-(1<<j)][k]+w[k][j]);
    cout<<f[(1<<n)-1][n-1];
}
int main(){
    solve();
    return 0;
}
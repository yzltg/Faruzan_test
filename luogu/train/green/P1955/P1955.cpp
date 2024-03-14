#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N=2e5+5;
int t,n,fa[N],copyback[N];
struct item{
    int x,y,op;
}binc[N];
int find(int x){
    if(x==fa[x]) return fa[x];
    else return fa[x]=find(fa[x]);
}
void solve(){
    cin>>n;
    memset(copyback,0x00,sizeof(copyback));
    memset(fa,0x00,sizeof(fa));
    for(int i=1,x1,x2,e;i<=n;i++){
        cin>>x1>>x2>>e;
        //进行离散化
        binc[i].x=x1,binc[i].y=x2,binc[i].op=e;
        copyback[i]=x1,copyback[n+i]=x2;
    }
    sort(copyback+1,copyback+2*n+1);
    int length=unique(copyback+1,copyback+2*n+1)-copyback-1;
    for(int i=1;i<=n;i++){
        binc[i].x=lower_bound(copyback+1,copyback+length+1,binc[i].x)-copyback;
        binc[i].y=lower_bound(copyback+1,copyback+length+1,binc[i].y)-copyback;
    }
    for(int i=1;i<=length;i++)
        fa[i]=i;
    bool flag=false;
    for(int i=1;i<=n;i++){
        if(binc[i].op==1){
            fa[find(binc[i].x)]=fa[find(binc[i].y)];
        }
    }
    for(int i=1;i<=n;i++){
        if(binc[i].op==0){
            if(fa[find(binc[i].x)]==fa[find(binc[i].y)]){
                flag=true;
                break;
            }
        }
    }
    if(flag==true) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--)solve();
    return 0;
}
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#define int long long//我也很好奇为什么会超int型
using namespace std;
const int N=1e4+5,M=105;
int n,m,k,dis[N][M],vis[N][M];//N表示n个点，m表示时间modk后的结果
vector<pair<int,int>>edge[N];//邻接表
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;//小根堆优化dijkstra算法
//q.top().first表示时间，q.top().second表示是什么点
void add(int a,int b,int c){//建边
    edge[a].push_back({b,c});
}
void bian(){//建图
    for(int i=1,u,v,a;i<=m;i++){
        cin>>u>>v>>a;
        add(u,v,a);
    }
}
void dijkstra(int x){//很好用的算法，但是名字不太好记
    dis[x][0]=0;//基本就是模版
    q.push({0,x});
    while(q.size()){
        int u=q.top().second,p=q.top().first;
        q.pop();
        if(vis[u][p%k]) continue;
        vis[u][p%k]=1;
        for(auto d:edge[u]){
            int v=d.first,w=d.second,time1;
            if(p>=w) time1=p;
            else time1=((w-p-1)/k+1)*k+p;
            if(dis[v][(time1+1)%k]>time1+1){
                dis[v][(time1+1)%k]=time1+1;
                q.push({time1+1,v});
            }
        }
    }
}
void solve(){//真正的主函数
    memset(dis,0x3f,sizeof(dis));
    memset(vis,0,sizeof(vis));
    cin>>n>>m>>k;
    bian();
    dijkstra(1);
    if(vis[n][0]==0) cout<<-1;
    else cout<<dis[n][0];
}
signed main(){//虚假的主函数
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);//不写#include <cstdio>导致的
    freopen("bus.in","r",stdin);
    freopen("bus.out","w",stdout);
    solve();
    return 0;
}
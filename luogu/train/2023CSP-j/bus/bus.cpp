#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#define int long long//��Ҳ�ܺ���Ϊʲô�ᳬint��
using namespace std;
const int N=1e4+5,M=105;
int n,m,k,dis[N][M],vis[N][M];//N��ʾn���㣬m��ʾʱ��modk��Ľ��
vector<pair<int,int>>edge[N];//�ڽӱ�
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;//С�����Ż�dijkstra�㷨
//q.top().first��ʾʱ�䣬q.top().second��ʾ��ʲô��
void add(int a,int b,int c){//����
    edge[a].push_back({b,c});
}
void bian(){//��ͼ
    for(int i=1,u,v,a;i<=m;i++){
        cin>>u>>v>>a;
        add(u,v,a);
    }
}
void dijkstra(int x){//�ܺ��õ��㷨���������ֲ�̫�ü�
    dis[x][0]=0;//��������ģ��
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
void solve(){//������������
    memset(dis,0x3f,sizeof(dis));
    memset(vis,0,sizeof(vis));
    cin>>n>>m>>k;
    bian();
    dijkstra(1);
    if(vis[n][0]==0) cout<<-1;
    else cout<<dis[n][0];
}
signed main(){//��ٵ�������
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);//��д#include <cstdio>���µ�
    freopen("bus.in","r",stdin);
    freopen("bus.out","w",stdout);
    solve();
    return 0;
}
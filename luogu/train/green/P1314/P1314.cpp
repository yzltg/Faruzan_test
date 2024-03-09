#include <iostream>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,s,l[N],r[N],pre_w[N],pre_v[N],sum,ans;
pair<int,int>mineral[N];
bool cheak(int M){
    for(int i=1;i<=n;i++){
        if(mineral[i].first>=M){
            pre_w[i]=pre_w[i-1]+1;
            pre_v[i]=pre_v[i-1]+mineral[i].second;
        }
        else pre_w[i]=pre_w[i-1],pre_v[i]=pre_v[i-1];
    }
    int y=0;
    for(int i=1;i<=m;i++){
        y+=(pre_w[r[i]]-pre_w[l[i]-1])*(pre_v[r[i]]-pre_v[l[i]-1]);
    }
    sum=llabs(y-s);
    if(y>s) return false;
    else return true;
}
void solve(){
    cin>>n>>m>>s;
    for(int i=1;i<=n;i++) cin>>mineral[i].first>>mineral[i].second;
    for(int i=1;i<=m;i++) cin>>l[i]>>r[i];
    int ans=0x3f3f3f3f3f3f3f3f;
    int l=0,r=1e6+5;
    while(l<r){
        int mid=l+r>>1;
        if(cheak(mid)) r=mid;else l=mid+1;
        if(sum<ans) ans=sum;
    }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
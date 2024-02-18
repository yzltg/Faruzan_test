//《算法竞赛进阶指南》的递归做法
#include <iostream>
#include <vector>
using namespace std;
vector<int>chosen;
int n,m;
void calc(int x){
    if(chosen.size()>m||chosen.size()+(n-x+1)<m) return;
    if(x==n+1){
        for(int i=0;i<chosen.size();i++) cout<<chosen[i]<<" ";
        cout<<endl;
        return;
    }
    chosen.push_back(x);
    calc(x+1);
    chosen.pop_back();
    calc(x+1);
}
void solve(){
    cin>>n>>m;
    calc(1);
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    //freopen("93.in","r",stdin);
    //freopen("93.out","w",stdout);
    solve();
    return 0;
}

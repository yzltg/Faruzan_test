#include <iostream>
#include <vector>
using namespace std;
const int NUM=105;
vector<int>edge[NUM];
int N;
void solve(){
    cin>>N;
    for(int i=1;i<=N;i++)
        for(int j=1,x;j<=N;j++){
            cin>>x;
            if(x==1)edge[i].push_back(j);
        }
    for(int i=1;i<=N;i++){
        for(auto k:edge[i]) cout<<k<<" ";
        cout<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
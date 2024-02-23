#include <iostream>
#include <algorithm>
using namespace std;
const int NUM=1e5+5;
int N,address[NUM];
long long ans;
void solve(){
    cin>>N;
    for(int i=1;i<=N;i++) cin>>address[i];
    sort(address+1,address+N+1);
    for(int i=1;i<=N/2;i++) ans+=address[N-i+1]-address[i];
    cout<<ans;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
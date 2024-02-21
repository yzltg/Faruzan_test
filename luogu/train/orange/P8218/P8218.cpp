#include <iostream>
using namespace std;
const int N=1e5+5;
int n,a[N],m;
void pre_sum(){
    for(int i=1;i<=n;i++) a[i]+=a[i-1];
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    pre_sum();
    cin>>m;
    for(int i=1,x,y;i<=m;i++){
        cin>>x>>y;
        cout<<a[y]-a[x-1]<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
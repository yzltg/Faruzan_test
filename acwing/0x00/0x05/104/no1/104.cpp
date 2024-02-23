#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N=1e5+5;
int n,A[N],ans;
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>A[i];
    sort(A+1,A+n+1);
    int mid=A[n/2+1];
    for(int i=1;i<=n;i++) ans+=abs(A[i]-mid);
    cout<<ans; 
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
#include <iostream>
using namespace std;
int A,B;
void solve(){
    cin>>A>>B;
    if(A+B==0)cout<<1;
    else cout<<A+B-1;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
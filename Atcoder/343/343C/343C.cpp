#include <iostream>
#define int long long
using namespace std;
int N,ans;
bool is_huiwen(int x){
    int mid=x,number=0;
    while(mid){
        number=number*10+mid%10;
        mid/=10;
    }
    if(number==x) return true;
    return false;
}
void solve(){
    cin>>N;
    for(int i=1;i<=1e6;i++){
        if(i*i*i>N) break;
        else if(is_huiwen(i*i*i)){
            ans=i*i*i;
        }
    }
    cout<<ans;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
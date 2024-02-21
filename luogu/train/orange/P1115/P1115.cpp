// #include <iostream>
// using namespace std;
// const int N=2e5+5;
// int n,ans=-N,num[N],res;
// void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++) cin>>num[i];
//     for(int i=1;i<=n;i++){
//         res+=num[i];
//         ans=max(res,ans);
//         if(res<0) res=0;
//     }
//     cout<<ans;
// }
// int main(){
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     solve();
//     return 0;
// }
#include <iostream>
using namespace std;
const int N=-2e5-5;
int n,res,ans=N;
void solve(){
    cin>>n;
    for(int i=1,x;i<=n;i++){
        cin>>x;
        res+=x;
        ans=max(ans,res);
        if(res<0) res=0;
    }
    cout<<ans;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
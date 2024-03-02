#include <iostream>
#include <map>
#define int long long
using namespace std;
const int NUM=2e5+5;
map<int,int>flag;
int N,T,score[NUM],count=1;
void solve(){
    cin>>N>>T;
    flag[0]=N;
    for(int i=1,A,B;i<=T;i++){
        cin>>A>>B;
        flag[score[A]]--;
        if(!flag[score[A]]) count--;
        score[A]+=B;
        if(!flag[score[A]])count++;
        flag[score[A]]++;
        cout<<count<<endl;
    }
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
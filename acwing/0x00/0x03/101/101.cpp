#include <iostream>
#include <map>
using namespace std;
const int NUM=5005;
int N,P,H,M,height[NUM];
void solve(){
    map<pair<int,int>,bool>cheak;
    cin>>N>>P>>H>>M;
    height[1]=H;
    for(int i=1,A,B;i<=M;i++){
        cin>>A>>B;
        if(A>B) swap(A,B);
        if(!cheak.count({A,B})){
            height[A+1]--,height[B]++;
            cheak[{A,B}]=true;
        }
    }
    for(int i=1;i<=N;i++){
        height[i]+=height[i-1];
        cout<<height[i]<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
const int NUM=1e5+5;
int N,M,T,row[NUM],column[NUM];
long long ans;
bool cheak_row,cheak_column;
void solve(){
    cin>>N>>M>>T;
    for(int i=1,x,y;i<=T;i++){
        cin>>x>>y;
        row[x]++,column[y]++;
    }
    cheak_row=!(T%N),cheak_column=!(T%M);
    if(cheak_row){
        if(cheak_column) cout<<"both ";
        else cout<<"row ";
    }
    else if(cheak_column) cout<<"column ";
    else{
        cout<<"impossible";
        return ;
    }
    if(cheak_row){
        for(int i=1;i<=N;i++) row[i]-=T/N;
        for(int i=1;i<=N;i++) row[i]+=row[i-1];
        sort(row+1,row+N+1);
        for(int i=1;i<=N/2;i++) ans+=row[N-i+1]-row[i];
    }
    if(cheak_column){
        for(int i=1;i<=M;i++) column[i]-=T/M;
        for(int i=1;i<=M;i++) column[i]+=column[i-1];
        sort(column+1,column+M+1);
        for(int i=1;i<=M/2;i++) ans+=column[M-i+1]-column[i];
    }
    cout<<ans;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    freopen("example.in","r",stdin);
    freopen("write.out","w",stdout);
    solve();
    return 0;
}
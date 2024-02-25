#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int P,number,length;
void solve(){
    int tot=0,mid=0;
    priority_queue<int>big_q;
    priority_queue<int,vector<int>,greater<int>>small_q;
    cin>>number>>length;
    cout<<number<<" "<<(length+1)/2<<endl;
    for(int i=1,M;i<=length;i++){
        cin>>M;
        if(M>=mid){
            small_q.push(M);
            if(small_q.size()>(i+1)/2){
                int x=small_q.top();small_q.pop();
                big_q.push(x);
            }
        }
        else{
            big_q.push(M);
            if(big_q.size()>(i+1)/2){
                int x=big_q.top();big_q.pop();
                small_q.push(x);
            }
        }
        if(i&1){
            tot++;
            if(tot%10==1&&tot>10) cout<<endl;
            if(small_q.size()>big_q.size()) mid=small_q.top();
            else mid=big_q.top();
            cout<<mid<<" ";
        }
    }
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    //freopen("cin.in","r",stdin);
    //freopen("cout.out","w",stdout);
    cin>>P;
    while(P--)solve();
    return 0;
}
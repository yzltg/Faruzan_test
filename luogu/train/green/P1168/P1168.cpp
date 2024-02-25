#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int N;
void solve(){
    int mid;
    priority_queue<int>big_q;
    priority_queue<int,vector<int>,greater<int>>small_q;
    cin>>N;
    for(int i=1,A;i<=N;i++){
        cin>>A;
        if(A>=mid){
            small_q.push(A);
            if(small_q.size()>(i+1)/2){
                int x=small_q.top();small_q.pop();
                big_q.push(x);
            }
        }
        else{
            big_q.push(A);
            if(big_q.size()>(i+1)/2){
                int x=big_q.top();big_q.pop();
                small_q.push(x);
            }
        }
        if(i&1){
            if(big_q.size()>small_q.size()) mid=big_q.top();
            else mid=small_q.top();
            cout<<mid<<endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
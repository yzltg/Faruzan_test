//递推
#include <iostream>
#include <vector>
using namespace std;
vector<int>chosen;
int n;
void calc(int x){
    if(x==n+1){
        for(int i=0;i<chosen.size();i++) cout<<chosen[i]<<" ";
        cout<<endl;
        return;
    }
    calc(x+1);
    chosen.push_back(x);
    calc(x+1);
    chosen.pop_back();
}
void solve(){
    cin>>n;
    calc(1);
}
int main(){
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
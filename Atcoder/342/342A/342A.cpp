#include <iostream>
#include <string>
using namespace std;
int times[27];
string s;
void solve(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        times[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++){
        if(times[s[i]-'a']==1){
            cout<<i+1<<endl;
            return;
        }
    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
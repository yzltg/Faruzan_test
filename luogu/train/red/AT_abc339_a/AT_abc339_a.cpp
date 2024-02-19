#include <string>
#include <iostream>
using namespace std;
string s;
int len;
void solve(){
    cin>>s;
    len=s.size();
    while(s[len-1]!='.'){
        len--;
    }
    cout<<s.substr(len);
    return;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
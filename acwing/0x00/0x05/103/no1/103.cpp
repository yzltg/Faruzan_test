#include <iostream>
#include <map>
using namespace std;
const int N=2e5+5;
int n,m,video[N],caption[N],ans;
struct who_happy{
    int best,more;
}ans_people;
void solve(){
    map<int,int>people;
    cin>>n;
    for(int i=1,a;i<=n;i++){
        cin>>a;
        people[a]++;
    }
    cin>>m;
    for(int i=1;i<=m;i++) cin>>video[i];
    for(int i=1;i<=m;i++) cin>>caption[i];
    for(int i=1;i<=m;i++){
        if(ans_people.best<people[video[i]]) 
            ans=i,ans_people={people[video[i]],people[caption[i]]};
        else if(ans_people.best==people[video[i]]&&ans_people.more<=people[caption[i]])
            ans=i,ans_people={people[video[i]],people[caption[i]]};
    }
    cout<<ans;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
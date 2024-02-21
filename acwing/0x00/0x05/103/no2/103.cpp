// #include <iostream>
// #include <algorithm>
// using namespace std;
// const int N=2e5+5;
// int n,m,people[N],video[N],caption[N],all,language[3*N],tot[3*N],length;
// int find(int x){
//     return lower_bound(language+1,language+length+1,x)-language;
// }
// void solve(){
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>people[i];
//         language[++all]=people[i];
//     }
//     cin>>m;
//     for(int i=1;i<=m;i++){
//         cin>>video[i];
//         language[++all]=video[i];
//     }
//     for(int i=1;i<=m;i++){
//         cin>>caption[i];
//         language[++all]=caption[i];
//     }
//     sort(language+1,language+all+1);
//     int length=unique(language+1,language+all+1)-(language+1);
//     for(int i=1;i<=n;i++) tot[find(people[i])]++;
//     int ans=1,choose_video=0,choose_caption=0;
//     for(int i=1;i<=m;i++){
//         int x=tot[find(video[i])],y=tot[find(caption[i])];
//         if(x>choose_video||x==choose_video&&y>choose_caption)
//             ans=i,choose_video=x,choose_caption=y;
//     }
//     cout<<ans;
// }
// int main(){
//     ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//     solve();
//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
const int N=2e5+5;
int n,m,length,people[N],language[N*3],tot,video[N],caption[N],ans[3*N];
int find(int x){
    return lower_bound(language+1,language+length+1,x)-language;
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>people[i];
        language[++tot];
    }
    cin>>m;
    for(int i=1;i<=m;i++) {
        cin>>video[i];
        language[++tot]=video[i];
    }
    for(int i=1;i<=m;i++) {
        cin>>caption[i];
        language[++tot]=video[i];
    }
    sort(language+1,language+tot+1);
    length=unique(language+1,language+tot+1)-(language+1);
    for(int i=1;i<=n;i++) ans[find(people[i])]++;
    int ans1=1,chosen_video=0,chosen_caption=0;
    for(int i=1;i<=m;i++){
        int x1=ans[find(video[i])],x2=ans[find(caption[i])];
        if(x1>chosen_video||x1==chosen_video&&x2>=chosen_caption){
            ans1=i,chosen_video=x1,chosen_caption=x2;
        }
    }
    cout<<ans1;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
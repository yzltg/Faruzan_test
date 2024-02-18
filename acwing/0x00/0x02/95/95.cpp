#include <iostream>
#include <cstring>
using namespace std;
const int N=1e7;
int t;
char map[5][5];
int fx[5]={-1,0,1,0,0},fy[5]={0,0,0,1,-1};
void turn(int x,int y){
    for(int i=0;i<5;i++){
        int a=x+fx[i],b=y+fy[i];
        if(a>=0&&a<5&&b>=0&&b<5) map[a][b]^=1; 
    }
}
void solve(){
    int ans=N;
    for(int i=0;i<5;i++) cin>>map[i];
    for(int k=0;k<1<<5;k++){
        int res=0;
        char backup[5][5];
        memcpy(backup,map,sizeof map);
        for(int j=0;j<5;j++)
        {
            if(k>>j&1)
            {
                res++;
                turn (0,j);
            }
        }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(map[i][j]=='0'){
                    res++;
                    turn(i+1,j);
                }
            }
        }
        bool is_successful=true;
        for(int i=0;i<5;i++) if(map[4][i]=='0') {is_successful=false;break;}
        if(is_successful==true) ans=min(ans,res);
        memcpy(map,backup,sizeof backup);
    }
    if(ans>6) cout<<-1<<endl;
    else cout<<ans<<endl;

}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>t;
    while(t--){
        solve();    
    }
    return 0;
}
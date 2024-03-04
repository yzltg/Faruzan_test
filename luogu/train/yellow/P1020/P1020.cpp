#include <iostream>
#include <cstring>
using namespace std;
const int INF=2147483647,N=1e5+5;
int high[N],f[N],f1[N],length,max_len,times;
void solve(){
    while(cin>>high[++length]);
    length--;
    f[0]=INF;
    for(int i=1;i<=length;i++){
        int l=0,r=max_len+1;
        while(r-l>1){
            int mid=l+r>>1;
            if(high[i]<=f[mid])l=mid;
            else r=mid;
        }
        int x=l+1;
        if(x>max_len) max_len=x;
        f[x]=high[i];
    }
    cout<<max_len<<"\n";
    for(int i=1;i<=length;i++){
        int l=0,r=times+1;
        while(r-l>1){
            int mid=l+r>>1;
            if(high[i]>f1[mid])l=mid;//当高度大于f1[i]时,应在右边找,否则应在左边查找
            else r=mid;
        }
        int x=l+1;
        if(x>times) times=x;
        f1[x]=high[i];
    }
    cout<<times;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
#include <iostream>
#define int long long
using namespace std;
const int N=5e5+5;
int n,number[N],count,number2[N];
void merge(int l,int r){
    if(l==r) return;
    int mid=l+r>>1;
    merge(l,mid);merge(mid+1,r);
    int i=l,j=mid+1;
    for(int k=l;k<=r;k++){
        if(number[i]<=number[j]&&i<=mid||j>r) number2[k]=number[i++];
        else number2[k]=number[j++],count+=mid-i+1;
    }
    for(int k=l;k<=r;k++) number[k]=number2[k];
}
void solve(){
    count=0;
    for(int i=1;i<=n;i++)cin>>number[i];
    merge(1,n);
    cout<<count<<endl;
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    while(cin>>n&&n!=0)solve();
    return 0;
}
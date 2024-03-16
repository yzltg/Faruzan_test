#include <iostream>
#include <algorithm>
using namespace std;
const int N=2e4+5;
int n,discre[2*N],sum[2*N],diff[2*N],ans;
struct stu{
	int low_l,low_r,x,y;
}len[N];
void solve(){
	cin>>n;
	for(int i=1,l,r;i<=n;i++){
		cin>>l>>r;
		discre[i]=l,discre[n+i]=r;
		len[i].x=l,len[i].y=r;
	}
	sort(discre+1,discre+2*n+1);
	int length=unique(discre+1,discre+2*n+1)-discre-1;
	for(int i=1;i<=n;i++){
		len[i].low_l=lower_bound(discre+1,discre+length+1,len[i].x)-discre;
		len[i].low_r=lower_bound(discre+1,discre+length+1,len[i].y)-discre;
	}
	for(int i=1;i<=n;i++)
		diff[len[i].low_l]++,diff[len[i].low_r]--;
	for(int i=1;i<=length;i++)
		sum[i]+=sum[i-1]+diff[i];
	int l,r;
	for(int i=1;i<=length;i++){
		if(sum[i]!=0&&sum[i-1]==0)l=i;
		if(sum[i]==0){
			r=i;
			ans+=discre[r]-discre[l];
		}
	}
	cout<<ans;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	solve();
	return 0;
}
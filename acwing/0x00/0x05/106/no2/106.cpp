//手打堆
#include <iostream>
using namespace std;
const int N=1e5+5;
int big_heap[N],small_heap[N];
int big_r,small_r;
void big_up(int low){//找到数的位置
    if(big_heap[low]>big_heap[low>>1]){
        big_heap[low]^=big_heap[low>>1],big_heap[low>>1]^=big_heap[low],big_heap[low>>1]^=big_heap[low];
        big_up(low>>1);
    }
    else return;
}
void push_big(int x){
    big_heap[++big_r]=x;
    big_up(big_r);
}
void solve(){
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
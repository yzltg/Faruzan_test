#include <iostream>
using namespace std;
int V1,V2,V3;
void solve(){
    cin>>V1>>V2>>V3;
    if(V1+V2*2+V3*3==1029){
        for(int a2=0;a2<=7;a2++)
            for(int b2=0;b2<=7;b2++)
                for(int c2=0;c2<=7;c2++)
                    for(int a3=0;a3<=7;a3++)
                        for(int b3=0;b3<=7;b3++)
                            for(int c3=0;c3<=7;c3++)
                            {
                                if((7-a2)*(7-b2)*(7-c2)+(7-a3)*(7-b3)*(7-c3)-min(7-a2,7-a3)*min(7-b2,7-b3)*min(7-c2,7-c3)==V2&&min(7-a2,7-a3)*min(7-b2,7-b3)*min(7-c2,7-c3)==V3){
                                    cout<<"0 0 0 "<<a2<<" "<<b2<<" "<<c2<<" "<<a3<<" "<<b3<<" "<<c3;
                                    return;
                                }
                            }
    }
    else cout<<"No"<<endl;
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    solve();
    return 0;
}
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[20001],b[20001],l=0;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        l+=b[i]-a[i];
        if(i+1<n)
            if(b[i]>a[i+1])
                l-=b[i]-a[i+1];
    }
    cout<<l;
    return 0;
}

class Solution {
public:
    vector<int> specialSort(int N) {
        vector<int> a;
        for(int i=0;i<N;i++) a.push_back(i+1);
        for(int i=1;i<N;i++){
            //假设前面的i个数已经排好序
            //则应该寻找一个区间
            //其左比x小,右应比x大
            int chosen=a[i];
            int l=0,r=i-1;
            while(l<=r){
                int mid=l+r>>1;
                if(compare(chosen,a[mid]))r=mid-1;
                else l=mid+1;
            }
            for(int j=i-1;j>=l;j--) a[j+1]=a[j];
            if(l!=i)a[l]=chosen;
        }
        return a;
    }
};
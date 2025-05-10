#include<bits/stdc++.h>
using namespace std;
class recursion{
    public:
    int binary_search(vector<int>&nums,int target){
        int st =0,end = nums.size()-1;
        return searcher_fun(nums,target,st,end);
    }
    private:
    int searcher_fun(vector<int>&nums,int target,int st,int end){
        int mid = (st+end)/2;
        if(st<=end){
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                return searcher_fun(nums,target,st,mid-1);
            }else if(nums[mid]<target){
                return searcher_fun(nums,target,mid+1,end);
            }
        }
        return -1;
    }

};
int main()
{
    recursion rec;
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter TI: "<<endl;
    cin>>target;
    int target_ind = rec.binary_search(v,target);
    cout<<"Target index: "<<target_ind<<endl;
    return 0;
}
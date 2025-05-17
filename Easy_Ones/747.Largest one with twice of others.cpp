#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int dominantIndex(vector<int>nums){
        vector<int>v = nums;
        sort(v.begin(),v.end());
        int n = v.size();
        int maxi = v[n-1];
        int smax = v[n-2];
        if(maxi>=2*smax){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==maxi){
                    return i;
                }
            }
        }
        return -1;
    }  
};
int main()
{
    Solution sol;
    vector<int>v = {3,6,1,0};
    int index = sol.dominantIndex(v);
    cout<<"Index: "<<index<<endl;
    return 0;
}
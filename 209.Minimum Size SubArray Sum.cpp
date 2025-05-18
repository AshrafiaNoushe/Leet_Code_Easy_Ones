#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        int initial =0;
        int minL = INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
           while(sum>=target){
            minL = min(minL,i-initial+1);
            sum -=nums[initial];
            initial++;
           }
        }
        return(minL==INT_MAX)?0:minL;


    }
};
int main()
{
    Solution sol;
    vector<int>v = {1,4,5,6,7};
    int target = 9;
    int ans = sol.minSubArrayLen(target,v);
    cout<<"Output: "<<ans<<endl;
    return 0;

}
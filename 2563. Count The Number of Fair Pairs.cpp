class Solution {
    public:
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            long long int i;
            long long int n = nums.size();
            long long ans=0;
            sort(nums.begin(),nums.end());
            for(i=0;i<n;i++){
                int left = lower_bound(nums.begin()+i+1,nums.end(),lower-nums[i])-nums.begin();
                int right = upper_bound(nums.begin()+i+1,nums.end(),upper-nums[i])-nums.begin();
                ans += (right-left);
    
            }
            return ans;
        }
    };
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] % 2 == 1) {
                count++;
                if (count >= 3) {
                    return true;
                }
            } else {
                count = 0;
            }
        }
        return false;
    }
};
int main()
{
    vector<int>v = {1,1,3,4,5};
    Solution sol;
    sol.threeConsecutiveOdds(v);
    cout<<sol.threeConsecutiveOdds(v)<<endl;
    return 0;
}

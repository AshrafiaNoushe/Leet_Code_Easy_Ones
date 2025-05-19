#include<bits/stdc++.h>
using namespace std;
const int N = 46;
vector<int>dp(N,-1);
class solution{
    public:
    int climbStairs(int n){
        if(n==0 || n==1) return 1;
        if(dp[n]!=-1){
            return dp[n];
        }else{
            return dp[n] = climbStairs(n-1)+climbStairs(n-2);
        }
    }
};

int main()
{
    solution sol;
    int n;
    cin>>n;
    int result = sol.climbStairs(n);
    cout<<result<<endl;
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int dp[N];
vector<int>nums(N);
int subseq_inc(int i,vector<int>&nums){
    //if(i==0)return 0;
    if(dp[i]!=-1){
        return dp[i];
    }
    int ans = 1;
    for(int j=0;j<i;++j){
        if(a[i]>a[j]){
            ans = max(ans,subseq_inc(j,nums)+1);
        }
    }
    return dp[i]=ans;

}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    int ans = 0;
    for(int i=0;i<n;++i){
        ans = max (ans,subseq_inc(i,nums));
    }
    cout<<ans<<endl;
}
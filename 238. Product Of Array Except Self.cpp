#include<bits/stdc++.h>
using namespace std;
void process_fun(vector<int>&nums){
    int n = nums.size();
    vector<int>v1(n,1);
    int left_ele = 1;
    for(int i=0;i<n;i++){
        v1[i]=left_ele;
        left_ele *=nums[i];
    }
    int right_ele=1;
    for(int i=n-1;i>=0;i--){
        v1[i] *= right_ele;
        right_ele *= nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    process_fun(v);
    return 0;
}
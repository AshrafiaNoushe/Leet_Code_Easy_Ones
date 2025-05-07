#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    bool isPalindrome(int x)
    {
            
        string s1 = to_string(x);
        string s2 = s1;
        reverse(s2.begin(),s2.end());
            if(s1==s2){
            return true;
            }else{
            return false;
        }
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;
    int ans = s.isPalindrome(n);
    cout<<ans<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int gcd(int a,int b){
                int temp = 0;
                if(b>a){
                    swap(a,b);
                }
                while(b!=0){
                    temp = b;
                    b = a%b;
                    a = temp;
                }
             return a;
        }
    
        string gcdOfStrings(string str1, string str2) {
            if(str1+str2 != str2+str1){
                return "";
            }else{
    
                int gcd_str= gcd(str1.length(),str2.length());
                return str1.substr(0,gcd_str);
            }
            
        }
};
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    Solution s;
    string s3 = s.gcdOfStrings(s1,s2);
    cout<<"GCD: "<<s3<<endl;
    return 0;
}
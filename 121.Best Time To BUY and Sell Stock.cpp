#include<bits/stdc++.h>
using namespace std;
class sol{
    public:
    int max_profit(vector<int>prices){
        int max_pf = 0;
        int min_sell = INT_MAX;
        for(int price:prices){
            if(price<min_sell){
                min_sell = price;
            }else{
                max_pf = max(max_pf,price-min_sell);
            }
        }
        return max_pf;
    }

};
int main()
{
sol s;
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int profit = s.max_profit(v);
cout<<"Max Profit= "<<profit<<endl;
return 0;
}
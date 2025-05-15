#include<bits/stdc++.h>
using namespace std;
void process_fun(vector<int>v){
    int n = v.size();
    int pos = 0;
    for(int i=0;i<n;i++){
        if(v[i]!=0){
            v[pos++]=v[i];
        }
    }
    while(pos<n){
        v[pos++]=0;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    process_fun(v);
    return 0;
}
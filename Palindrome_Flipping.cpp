#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int t0=0,t1=0;
        for(auto ch:str){
            if(ch=='0')t0++;
            else t1++;
        }
        string rev=str;
        reverse(rev.begin(),rev.end());
        if(rev==str)cout<<"YES\n";
        else if((t0%2==1 and t1%2==1))cout<<"NO\n";
        else cout<<"YES\n";
        
    }
}
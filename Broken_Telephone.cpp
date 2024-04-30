#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n;
    cin>>n;
    int v1[n];
    for(int &num : v1) cin>>num;
    bool sm =1;
    int ct = 0;
    for(int i = 0; i<(n-1) ; i++){
        if((v1[i] != v1[i+1]) && sm){
            // cout<<"gg1 ";
            sm = 0;
            ct +=2;
        }
        else if(v1[i] != v1[i+1]){
            // cout<<"gg ";
            ct++;
        }
        else sm =1;
    }
    cout<<ct<<endl;


}
return 0;
}
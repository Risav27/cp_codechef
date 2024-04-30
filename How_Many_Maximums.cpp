#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n;
    string str;
    cin>>n>>str;
    bool  flg0 = 1;
    int ct = 0;
    for(int i = 0; i<(n-1); i++){
        if((i == 0) && (str[i] == '1')){
            ct++;
        }
        else if((str[i] == '0') && flg0){
            ct++;
            flg0 = 0;
        }
       else if(str[i] == '1'){
        flg0 = 1;
       }
        
    }
    cout<<ct<<endl;



}
return 0;
}
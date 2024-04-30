#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string sr;
        cin>>sr;
        int ct = 0;
        for(int i = 0 ; i<sr.length() -1 ; i++){
            if(sr[i] == '<' && sr[i+1] == '>'){
                ct++;
            }
        }
        cout<<ct<<endl;
    }


return 0;
}
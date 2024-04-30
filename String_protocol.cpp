#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ctr = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == s[i+1]){
                ctr ++;
                i++;
            }
            else ctr++;
        }
        cout<<ctr<<endl;
    }


return 0;
}
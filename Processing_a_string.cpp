#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int sm = 0;
        int n;
        for(char ch : str){
            if(ch <= '9' && ch>= '1'){
                n = ch - '0';
                sm+=n;
            }
        }
        cout<<sm<<endl;
    }


return 0;
}
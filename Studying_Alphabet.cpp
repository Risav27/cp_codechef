#include <bits/stdc++.h>
using namespace std;


int main(){
    string s;
    int t;
    cin>>s>>t;
    while(t--){
        string let;
        cin>>let;
        bool flag = 1;
        for(char c : let){
            bool checkBool = 0;
            for(char v : s){
                if(v == c){
                    checkBool = 1;
                    break;
                }
            }
                if(!checkBool){
                    flag = 0;
                    break;
                }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }


return 0;
}
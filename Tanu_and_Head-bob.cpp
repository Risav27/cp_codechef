#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        string s;
        cin>>len>>s;
        bool flag = 1;
        for(char ch : s){
            if (ch == 'I'){
                cout<<"INDIAN"<<endl;
                flag = 0;
                break;
            }
            else if (ch == 'Y'){
                cout<<"NOT INDIAN"<<endl;
                flag = 0;
                break;
            }
        }
        if (flag) cout<<"NOT SURE"<<endl;
    }


return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string str;
        cin>>str;
        bool flag = 1 , dblflag = 0;
        for(int i = 0; i<len ; i++){
            if(str[i] == '1'){
                flag = 0;
                if(str[i] == str[i+1]){
                    dblflag = 1;
                    break;
                }
            }
        }
        if(dblflag){
            cout<<2<<endl;
            continue;
        }
        if(flag){
            cout<<0<<endl;
        }
        else cout<<1<<endl;
    }



return 0;
}
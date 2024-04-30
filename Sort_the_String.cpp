#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        string str;
        cin>>len>>str;
        bool equFlag = 1;
        int ctr = 0;

        for(int i = 0; i< len; i++){
            if(str[i] != str[i+1]){
                equFlag = 0;
                if(str[i] == '1' && str[i+1] == '0'){
                    ctr++;
                }
            }
        }
        if(equFlag){
            cout<<0<<endl;
        }
        else{
            cout<<ctr<<endl;
        }

    }


return 0;
}
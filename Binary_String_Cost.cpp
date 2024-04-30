#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int len , x , y;
        string str;
        cin>>len>>x>>y>>str;
        int ctr1=0 , ctr2=0;
        bool flag = 1;
        for(int i =0 ; i<len-1; i++){
            if(str[i] != str[i+1]){
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<0<<endl;
        }
        else{
            if(x<y) cout<<x<<endl;

            else cout<<y<<endl;
        }
        
    }


return 0;
}
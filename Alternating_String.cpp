#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int len;
        string str;
        cin>>len>>str;
        int ctr1 =0 , ctr2 = 0;
        for(char c : str){
            if(c == '0'){
                ctr1 ++;
            }
            else ctr2 ++;
        }

        if(ctr1<ctr2) cout<<ctr1*2+1<<endl;
        else if(ctr1>ctr2) cout<<ctr2*2+1<<endl;
        else cout<<ctr1*2<<endl;
    }


return 0;
}
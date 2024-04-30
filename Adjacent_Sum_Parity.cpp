#include <bits/stdc++.h>
using namespace std;


int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ct = 0 ;
        for(int i = 0 ;i<n-1 ; i++){
            int d;
            cin>>d;
            if(d%2 == 1){
                ct++;
            }
        }
        int flag ;
        cin>>flag;
        if(ct%2 == flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }


return 0;
}
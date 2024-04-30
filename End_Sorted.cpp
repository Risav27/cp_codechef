#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mx = 0, mn = INT_MAX ,mxCtr , mnCtr;
        for(int i = 0 ; i<n; i++){
            int x;
            cin>>x;
            if(x>= mx){
                mx = x;
                mxCtr = i;

            }
            if(x < mn){
                mn = x;
                mnCtr = i;
            }
        }
        // cout<<mn<<" "<<mx<<endl;
        // cout<<mnCtr<<" "<<mxCtr<<endl;
        if(mx == mn){
            cout<<0<<endl;
        }
        else if(mnCtr<=mxCtr){
            cout<<mnCtr+(n-(mxCtr +1))<<endl;

        }
        else{
            cout<<mnCtr +(n-mxCtr -1) -1<<endl;
        }
    }


return 0;
}

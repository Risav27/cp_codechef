#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--){
        unsigned long int n, a,b,ans;
        cin>>n;
        if(n & 1){
            a = n/2;
            b = a+1;
            ans = a*b*2;
        }
        else{
            a = n/2;
            ans = a*a*2;
        }

        cout<<ans<<endl;
    }


return 0;
}
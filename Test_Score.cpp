#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n,x,y;
    cin>>n>>x>>y;

    if(y%x == 0){
        if(y/x <= n) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";



}
return 0;
}
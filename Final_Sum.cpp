#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n,q , sm =0;
    cin>>n>>q;
    while(n--){
        int num;
        cin>>num;
        sm+=num;
    }

    while(q--){
        int a,b;
        cin>>a>>b;
        if((b-a) % 2 == 0) sm++;
    }
    cout<<sm<<endl;


}
return 0;
}
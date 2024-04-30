#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int a ,b ,x;
        cin>>a>>b>>x;
        if(abs(a-b)%x == 0){
        int k = abs(a-b)/x;
            if(k%2 == 0)
            cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }


return 0;
}
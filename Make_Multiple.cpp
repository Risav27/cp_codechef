#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int a ,b;
    cin>>a>>b;
    if (a==b) cout<<"YES\n";
    else if(b >= (a*2)) cout<<"YES\n";
    else cout<<"NO\n";


}
return 0;
}
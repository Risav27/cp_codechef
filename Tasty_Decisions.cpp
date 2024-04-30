#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int x ,y;
    cin>>x>>y;
    int c, b;
    c = x *2;
    b = y*5;
    if(c>b){
        cout<<"Chocolate\n";
    }
    else if (c<b) cout<<"Candy\n";
    else cout<<"Either\n";


}
return 0;
}
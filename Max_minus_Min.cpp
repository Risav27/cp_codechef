#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--) {
    int a,b,c;
    cin>>a>>b>>c;
    int mx,mn;
    mx = max(a,b);
    mx = max(mx,c);
    if(a<b && a<c) mn = a;
    else if(a>b && b<c) mn = b;
    else  mn = c;
    cout<<mx-mn<<endl;


}
return 0;
}
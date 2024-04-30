#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int x,y,z;
    cin>>x>>y>>z;
    int ttlCt;
    if(z<y) {
        if(y%z ==0) ttlCt = (y/z)*x;
        else ttlCt = (y/z+1)*x;
    }
    else ttlCt = x;
    cout<<ttlCt<<endl;


}
return 0;
}
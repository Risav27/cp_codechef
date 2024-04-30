#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n;
    cin>>n;
    int mx = 0;
    while(n--){
        int num;
        cin>>num;
        mx = max(mx,num);
    }
    cout<<mx<<endl;


}
return 0;
}
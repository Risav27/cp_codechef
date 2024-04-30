#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n;
    string s;
    cin>>n>>s;
    bool flg = 1;
    if(n == 1){
        cout<<"YES\n";
        continue;
    }
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
        if((s[i] == s[i+1])){
            i++;
        }
        else {
            flg = 0;
            break;
        }
        }

    }
    if(flg) cout<<"YES\n";
    else cout<<"NO\n";


}
return 0;
}
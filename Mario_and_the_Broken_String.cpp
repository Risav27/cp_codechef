#include <bits/stdc++.h>
using namespace std;

#define vi              vector <int>
#define vii             vector<vector<int>
#define rep(i,a,n)      for(int i = a; i<n; i++)
#define pb           push_back

typedef long long     ll;

const int MOD  = 1e9 +7 , N = 1e5 +2 ;

int main(){
int t;
cin>>t;
while (t--) {
    int ln;
    string s;
    cin>>ln>>s;
    bool flg = 1;
    rep(i,0,((ln/2))){
        if(s[i] != s[(ln/2) + i]){
            flg = 0;
            break;
        }
        
    }
    if(flg) cout<<"YES\n";
    else cout<<"NO\n";


}
return 0;
}
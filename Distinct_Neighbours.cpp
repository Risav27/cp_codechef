#include <bits/stdc++.h>
using namespace std;

#define vi              vector <int>
#define vii             vector<vector<int>>
#define mii             map<int , int>
#define rep(i,a,n)      for(int i = a; i<n; i++)
#define pb           push_back
#define ff          first
#define ss          second

typedef long long     ll;

const int MOD  = 1e9 +7 , N = 1e5 +2 ;

int main(){
int t;
cin>>t;
while (t--) {
    int n;
    cin>>n;
    int len = n*2;
    mii mp;
    rep(i , 0 , len){
        int k;
        cin>>k;
        mp[k]++;
    }
    int mx = 0;
    for(auto it : mp){
        mx = max(mx,(it.ss));

    }
    int of = len - mx;
    int op = (of+(of+1)*2);
    if(op<mx) cout<<"NO\n";
    else cout<<"YES\n";



}
return 0;
}
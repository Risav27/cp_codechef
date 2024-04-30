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

const ll MOD  = 998244353 , N = 1e5 +2 ;

int main(){
int t;
cin>>t;
while (t--) {
    int n;
    cin>>n;
    ll ttl = 0;
    while(n--){
        int k;
        cin>>k;
        ttl +=k;
        ttl %= MOD;
    }
    ll ans = ((ttl%MOD) * (ttl-1)%MOD)%MOD;
    
    cout<<ans<<endl;


}
return 0;
}
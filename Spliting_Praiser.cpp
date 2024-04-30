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

const int MOD  = 1e9 +7 , N = 1e6+2;

ll fact[N];

int main(){
    fact[0] = fact[1] = 1;
    rep(i,2,N+1){
        fact[i] = ((i)*(fact[i-1]))%MOD;
    }
int t;
cin>>t;
while (t--) {
    int n;
    cin>>n;
    ll ans = 0;
    while(n--){
        int i;
        cin>>i;
        ans += fact[i];
        ans %= MOD;
        
    }
    cout<<ans<<endl;

}
return 0;
}
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
#define int ll

const int MOD  = 1e9 +7 , N = 1e5 +2 ;



void solve(){
  int b,a;
  cin>>a>>b;

  while(__gcd(a,b) >1) b /= __gcd(a,b);

  if(b == 1) cout<<"YES\n";
  else cout<<"NO\n";
    


}


signed main(){
        ios :: sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
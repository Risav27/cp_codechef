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
#define int  ll

const int MOD  = 1e9 +7 , N = 1e5 +2 ;


bool compare(pair<int , int> a , pair <int , int> b){
  return a.ss* b.ff < b.ss*a.ff;

}


void solve(){
  int n;
  cin>>n;
  vector<pair<int , int>> vp(n);
  rep(i , 0 , n) cin>>vp[i].ff;
  rep(i , 0 , n) cin>>vp[i].ss;

  sort(vp.begin() , vp.end() , compare);

  // for ( auto i : vp) cout<< i.ff <<" "<<i.ss<<endl;

  int ln = 0;
  int ttl = 0;
  rep( i , 0 , n){
    ttl += ln*vp[i].ss;
    ln += vp[i].ff;
  }

  cout<<ttl<<endl;




}


signed main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
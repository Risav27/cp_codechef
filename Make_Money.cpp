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



void solve(){
  int n , x, c;
  cin >> n>> x>>c;
  vi cns(n);
  for(auto &i : cns) cin>>i;
  int ttl = 0;
  for(int i : cns){
    if( (x -i) > c ) ttl += (x -c);
    else ttl += i;
  }

  cout<<ttl<<endl;


}


int main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
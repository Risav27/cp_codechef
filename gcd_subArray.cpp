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
  int n , k;
    cin>>n>>k;
    int chk = (n*(n+1) /2);
    if(k<chk){
        cout<<-1<<endl;
        return;
    }
    int rem = k-chk +1;
    cout<<rem<<" ";
    rep(i , 0 , n-1){
        cout<<1<<" ";
    }cout<<endl;

}


signed main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
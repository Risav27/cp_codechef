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

void solve(){
    int n , k;
    cin>>n>>k;
    if (n == 1){
        cout<<0<<endl;
        return;
    }
    int ans;
    if(k >= n/2) ans = ((n-1)*(n))/2;
    else {
        int rmd = n - k*2  -1;
        ans = ((n-1)*(n))/2 - (rmd*(rmd+1))/2;
    }
    cout<<ans<<endl;
}

signed main(){
int t;
cin>>t;
while (t--) {
    solve();

}
return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define vi              vector <int>
#define vii             vector<vector<int>>
#define vpii            vector<pair<int,int>>
#define mii             map<int , int>
#define rep(i,a,n)      for(int i = a; i<n; i++)
#define pb           push_back
#define ff          first
#define ss          second

typedef long long     ll;


#define int    ll

const int MOD  = 1e9 +7 , N = 1e5 +2 ;



void solve(){
    int n;
    cin>>n;

    vi arr(n);
    for(auto &i : arr) cin>>i;

    if (n==1){
        cout<<1<<endl;
    }
    else{
        int gcd = __gcd(arr[0] , arr[1]);
        rep(i , 2 , n){
            gcd = __gcd(gcd , arr[i]);
        }
        rep(i , 0 , n) cout<<arr[i]/gcd<<" ";
        cout<<endl;
    }


}


signed main(){
int t = 1;
cin>>t;
while (t--) {
    solve();


}
return 0;
}


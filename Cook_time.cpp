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
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(__null);


typedef long long     ll;


#define int    ll

const int MOD  = 1e9 +7 , N = 1e5 +2 ;



void solve(){
    int n , k;
    cin>>n>>k;

    mii dsctr;
    vi ds(n);
    for(auto &i : ds){
        cin>>i;
        dsctr[i] = INT_MAX;
    }
    rep(i , 0 , n){
        int tm;
        cin>>tm;
        dsctr[ds[i]] = min(dsctr[ds[i]] , tm);

    }
    if(dsctr.size() <k){
        cout<<-1<<endl;
        return;
    }
    vi tm;
    for(auto it : dsctr){
        tm.pb(it.ss);
    }

    sort(tm.begin() , tm.end());

    int ttl = 0;
    rep(i,0,k) ttl+=tm[i];

    cout<<ttl<<endl;


}


signed main(){
fastio()
int t = 1;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
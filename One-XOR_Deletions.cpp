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
    int n;
    map<int , int> mp;
    cin>>n;
    rep(i,0,n){
        int k;
        cin>>k;
        mp[k] ++;

    }
    int ct = 0 , mx = 0;
    for(auto it : mp){
        if((it.ff & 1) == 0){
            if(mp.find(it.ff +1) != mp.end()){
                ct = it.ss + mp[it.ff +1];
                mx = max(mx,ct);
            }
            else{
                mx = max(mx,it.ss);
            }
        }
        else mx = max(it.ss , mx);
    }

    cout<< n- mx<<endl;
}

int main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
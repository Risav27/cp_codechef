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

int main(){
int t;
cin>>t;
while (t--) {
    int n;
    cin>>n;
    mii mp;
    rep(i , 0 , 2*n){
        int k;
        cin>>k;
        mp[k]++;
    }
    bool flg = 1;
    for(auto it : mp){
        if(it.ss>2){
            flg = 0;
            break;
        }
        
    }
    if(flg) cout<<"Yes\n";
    else cout<<"No\n";




}
return 0;
}
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
    int n , k;
    cin>>n>>k;
    bool fnd = 0;
    int ind ;
    int ct = 0;
    rep(i,0,n){
        int g;
        cin>>g;
        if(k == g){
            fnd = 1;
            ind = i;
            ct ++;

        }
    }
    if(ct>1) cout<<"Yes\n";
    else if((fnd) && (ind != n-1)) cout<<"Yes\n";
    else cout<<"No\n";



}
return 0;
}
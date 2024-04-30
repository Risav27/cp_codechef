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
    int n  , t, bt;
    cin>>n>>t>>bt;
    int p = log2(n);
    // cout<<p<<endl;
    int ttl = p*t + (p-1)*bt;
    cout<<ttl<<endl;


}
return 0;
}
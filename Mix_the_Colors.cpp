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
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while (t--) {
    int len;
    cin>>len;
    mii mp;
    while(len--){
        int i ;
        cin>>i;
        mp[i]++;
    }
    int ans = 0;
    for(auto it : mp){
        if(it.ss > 1){
            ans+= it.ss-1;
        }
    }
    cout<<ans<<endl;


}
return 0;
}
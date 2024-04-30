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
    int n, a,b , x , y;
    cin>> n >>a>>b>>x>>y;
    int ttlDis = abs(x-a) + abs(y-b);
    //a,b on smallest eend;
    int otds = min( min(a , abs(n+1 - a)), min(b , abs(n+1 -b)));
    int inds = min(min(x , abs(n+1-x)) , min ( y , abs(n+1-y)));
    //x , on smallest end
    // int otds1 = min(x,y);
    // int inds1 = min(abs(n+1-a) , abs(n+1-b));

    ttlDis = min(ttlDis , otds + inds);
    cout<<ttlDis<<endl;

    


}

int main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
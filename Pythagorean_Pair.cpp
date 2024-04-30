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

const int MOD  = 1e9 +7 ;
const ll  N = 1e5 +5 ;

signed main(){
int t;
cin>>t;
ll arr[N];
rep(i , 0 , N) arr[i] = (i*i);
while (t--) {
    ll n;
    cin>>n;
    int ctr =0;
    while(n%4 == 0){
        ctr++;
        n /= 4;

    }
    ll fst =0  , lst = (sqrt(n)+1);
    lst = min(lst,N);
    bool fnd =0;
    while(fst<=lst){
        if(arr[fst] + arr[lst] == n) {
            fnd = 1;
            break;
        }
        else{
            if((arr[fst] + arr[lst]) < n) fst++;
            else lst--;
        }
    }
    if(fnd) cout<<(fst<<ctr)<<" "<<(lst<<ctr)<<endl;
    else cout<<-1<<endl;


    


}
return 0;
}
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


#define in ll

const int MOD  = 1e9 +7 , N = 1e5 +2 ;



void solve(){
  int n;
  cin>>n;
  vi ele(n);
  for( auto &i : ele) cin>>i;
  sort(ele.begin() , ele.end());
  vi ansArr;
  int fp = 0 , ep = n-1;
  int lstPrev = INT_MAX;
  while(fp<=ep){

    // cout<<fp<<" "<<ep<<endl;
    if(fp == ep) {
        if(lstPrev > ele[fp]) ansArr.pb(ele[fp]);
        else {
            cout<<-1 <<endl;
            return;
        }

    }
    else{
        if(lstPrev > ele[fp]){
            ansArr.pb(ele[fp]);
            ansArr.pb(ele[ep]);
            lstPrev = ele[ep];
        }
        else {
            cout<<-1<<endl;
            return;
        }
    }
    fp++;
    ep--;
  }

  for(int i : ansArr) cout<<i<< " ";
  cout<<endl;


}


signed main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
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
bool check(pair<int,int> a , pair<int,int> b){
  return a.ff<b.ff;
}


void solve(){
  // string ans = "0000000000000000000000000000000000000000000000000700005";
  // while(!ans.empty()){
  //   if(ans[0] == '0') ans.erase(ans.begin());
  //   else break;
  // }

  // cout<<ans<<endl;
  // int a;
  // int i = 0;
  // for(;;) printf("gg  %d \n" , ++i);

  // priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> >pq;

  // pq.push({2,56});
  // pq.push({5,2});
  // pair<int,int> temp = pq.top();
  // cout<<temp.ff<<" "<<temp.ss<<endl;

  // vector<pair<int,int>> vc;

  // vc.push_back({23,4});
  // vc.push_back(make_pair(43,5));
  // vc.push_back({2,45});

  // sort(vc.begin() , vc.end() , check);
  // for(auto it : vc) cout<<it.ff<<" ";
  // cout<<endl;
  // cout<<vc.back().ff<<endl;

  int n;
  cin>>n;
  vi vp(n);
  for(auto &i : vp) cin>>i;
  int cs1 = vp[0] , cs2 = vp[0] , ans = 0;

  rep(i ,1,n+1){
    ans = max((ans-cs1) , ans);
    ans = max((cs1-ans) , ans);
    cs1= vp[i];

  }

  cout<<ans<<endl;









}


int main(){
int t=1;
// cin>>t;
while (t--) {
    solve();


}
return 0;
}
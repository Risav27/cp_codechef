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
  cin>>n;
  vi arr(n);
  for(auto &i : arr) cin >>i;
  int dp[n];
  bool isNeg ;
  for( int i = n-1 ; i>=0 ; i--){
    if(i == n-1){
        dp[i] = 1;
        if(arr[i]<0) isNeg = 1;
        else isNeg = 0;
    }
    else{
        if(arr[i]<0){
            if(!isNeg){
                dp[i] = dp[i+1] +1;
                 

            }
            else{
                dp[i] = 1;

                 
            }
            isNeg = 1;
        }
        else if(arr[i]>0){
            if(isNeg){
                dp[i] = dp[i+1] +1;
                 

            }
            else{
                dp[i] = 1;
            }
            isNeg = 0;
        }
    }
  }
  for(int i : dp) cout<<i<<" ";
  cout<<endl;



}


int main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
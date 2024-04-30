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
    int arr[n] , solnArr[n];
    rep(i,0,n){
        cin>>arr[i];
        solnArr[i] = 0;
    }
    int fp = 0 , lp = n-1;
    while(lp >=fp){
      if(arr[fp] == arr[lp]) {
        fp++;
        lp --;
      } 
      else if(arr[fp]>arr[lp]){
        solnArr[fp] = arr[fp] - arr[lp];
        fp++;
        lp--;

      }
      else{
        solnArr [lp] = arr[lp] - arr[fp];
        fp++;
        lp--;
      }
    }
    


}
return 0;
}
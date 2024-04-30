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
  int len;
  cin>>len;
  string str;
  cin>>str;
  map <char , int> mc;
  int fndLn = 1;
  int mxAns = 0;
  rep(i , 0 , len-1){
    if(str[i] != str[i+1]){
        if(mc.find(str[i]) !=mc.end()){
            int subln = min(mc[str[i]] , fndLn );
            mxAns = max(subln , mxAns);
            mc[str[i]] = max(mc[str[i]] , fndLn);
            fndLn = 1;

        }
        else{
            mc[str[i]] = fndLn;
            fndLn = 1;
        }
    }
    else {
        fndLn ++;
    }
  }
        if(mc.find(str[len - 1]) !=mc.end()){
            int subln = min(mc[str[len -1]] , fndLn );
            mxAns = max(subln , mxAns);
            mc[str[len -1]] = max(mc[str[len -1]] , fndLn);

        }
        else{
            mc[str[len -1]] = fndLn;
        }


    int mxMp = 0;
  for(auto it : mc)  mxMp= max(mxMp , it.ss);
  cout<<max(mxAns , mxMp -1)<<endl;



}


int main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
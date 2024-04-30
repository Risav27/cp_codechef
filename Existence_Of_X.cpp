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
  int a, b, c;
  cin>>a>>b>>c;
    bool rmd = 0;
  while(a>0 || b>0 || c > 0){
    int ai , bi , ci , rmdi;
    if(a&1) ai = 1;
    else ai = 0;
    if(b&1) bi = 1;
    else bi = 0;
    if(c&1) ci =1;
    else ci = 0;
    if(rmd) rmdi = 1;
    else rmdi = 0;

    // cases
    // cout<<rmd<<endl;
    // cout<<ai+bi+rmdi<<endl;
    // cout<<ci<<endl;
    if(ai + bi + rmdi == ci){
        // cout<<"here\n";
        rmd = 0;
    }
    else if(ai && bi){
        if (rmd){
            if (!ci) rmd = 0;
        }
        else{
            if(!ci) rmd = 1;
            else rmd = 0;
        }

    }
    else if( !ai && !bi){
        if(rmd){
            if (!ci) rmd =1;
        }
        else{
            rmd = 1;
        }
    }
    // else if( ai && !bi){
    //     if (rmd){
    //         if(ci) rmd = 1;
    //     }
    //     else{
            
    //     }
    // }
    // cout<<"gg"<<endl;
    // cout<<a<<" "<<b<<" "<<c<<endl;
    // cout<<ai<<" "<<bi<<" "<<ci<<endl;
    a = a>>1;
    b = b>>1;
    c = c>>1;

  }
  if(rmd) cout<<"NO\n";
  else cout<<"YES\n";


}


int main(){
int t;
cin>>t;
while (t--) {
    solve();


}
return 0;
}
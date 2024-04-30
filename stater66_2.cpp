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
    int d , ed , mob , tdays;
    cin>>d>>ed>>mob>>tdays;
    int rd = d*(mob-1) + (d+ed);
    int rem = tdays/rd;
    if(tdays%rd == 0) cout<<"YES\n";
    else{
        int ovd = rd*(rem+1);
        if((ovd - tdays) <(d+ed)) cout<<"YES\n";
        else cout<<"NO\n";

    }



}
return 0;
}
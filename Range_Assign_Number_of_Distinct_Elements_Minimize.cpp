#include <bits/stdc++.h>
using namespace std;

#define vi              vector <int>
#define vii             vector<vector<int>
#define rep(i,a,n)      for(int i = a; i<n; i++)
#define pb           push_back

typedef long long     ll;

const int MOD  = 1e9 +7 , N = 1e5 +2 ;

int main(){
int t;
cin>>t;
while (t--) {
    int ln;
    cin>>ln;
    vi arr(ln);
    rep(i,0,ln){
        cin>>arr[i];
    }
    bool flg = 0;
    if(arr[0] == arr[ln-1])flg = 1;
    else if(arr[0] == arr[ln-2]) flg = 1;
    if(arr[1] == arr[ln-1]) flg = 1;
    else{
        int fi = arr[0] , la = arr[ln -1];
        rep(i,0,(ln-1)){
            if((arr[i] == fi ) && (arr[i+1] == la)){
                flg = 1;
                break;
            }
        }
    }


    if(flg)cout<<"YES\n";
    else cout<<"NO\n";


}
return 0;
}
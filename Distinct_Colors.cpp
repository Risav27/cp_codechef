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
    int n;
    cin>>n;
    int mx = 0;
    while(n--){
        int c;
        cin>>c;
        if(c>mx) mx = c;
    }
    cout<<mx<<endl;


}
return 0;
}
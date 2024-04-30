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
    int arr[n];
    int p = 0 ,gcf ;
    int k ;
    cin>>k;
    gcf = k;
    arr[0] = k;
    rep(i,1 , n){
        int a;
        cin>>a;
        gcf = __gcd(gcf,__gcd(k,a));
        k = a;
        arr[i] = a;
        // cout<<gcf<<endl;
    }
    
    rep(i,0,n){
        if(arr[i] != gcf) p++;
    }
    cout<<p<<endl;


}
return 0;
}
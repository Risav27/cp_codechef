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
    int a, b;
    cin>>a>>b;
    int n= a+b;
    if((n == 2) || (n==3) || (n==5) || (n==7) || (n==11) || (n==13)){
        cout<<"Alice\n";
    }
    else cout<<"Bob\n";


}
return 0;
}
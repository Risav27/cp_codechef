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
    int n , a,b;
    cin>>n>>a>>b;
    mii m1;
    m1[0] = 0;
    m1[1] = 0;
    while(n--){
        int k;
        cin>>k;
        if(k%a == 0) m1[0]++;
        else if(k%b == 0) m1[1] ++;

    }
    if(m1[0] == m1[1]){
        if(m1[0] &1){
            cout<<"BOB\n";
        }
        else{
            cout<<"ALICE\n";
        }
    }
    else{
        if(m1[0]>m1[1])cout<<"BOB\n";
        else cout<<"ALICE\n";
    }


}
return 0;
}
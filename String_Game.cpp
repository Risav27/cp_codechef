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
    int len;
    string str;
    cin>>len>>str;
    if(len &1) cout<<"NO\n";
    else{
        bool fnl = 1;
        map <char , int > mp;
        for(char ch : str){
            mp[ch]++;
        }
        for( auto it : mp){
            if(it.ss &1) {
                fnl = 0;
                break;
            }
        }
        if(fnl){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }


}
return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define sf(a,n)      for(int i = a; i<n; i++)
#define pb           push_back

typedef long long     ll;

const ll MOD  = 1e9 +7;

int main(){
int t;
cin>>t;
while (t--) {
    int n;
    string str1,str2;
    cin>>n>>str1>>str2;
    int sm =0;
    sf(0,n){
        int l1= (str1[i] - 'a')+1;
        int l2 = (str2[i] - 'a') +1;
        int a2b;
        if(l1>l2) a2b = (26-l1)+l2;
        else a2b = l2-l1;
        sm+=a2b;
        // cout<<a2b<<endl;
    }
    int ans = sm;
    sf(1,n+1){
        ans = min(ans , abs(sm-26*i));
    }
    cout<<ans<<endl;



}
return 0;
}
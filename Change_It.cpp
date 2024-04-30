#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map < int , int> m1;
        for (int i = 0 ; i<n; i++)
        {
            int num;
            cin>>num;
            m1[num] ++;
        }
        int mx = 0;
        for(auto s : m1){
            mx = max(mx , s.second);
        }
        cout<<n-mx<<endl;
    }


return 0;
}
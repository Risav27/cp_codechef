#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, sum = 0;
        cin>>n;
        while(n--){
            int num;
            cin>>num;
            sum += num;
        }
        if(sum & 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }


return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        map <char , int> m1;
        for ( char ch : str){
            m1[ch]++;
        }
        bool flag = 1;
        for (auto a : m1){
            if(a.second %2 == 1){
                flag = 0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout <<"NO"<<endl;
    }


return 0;
}
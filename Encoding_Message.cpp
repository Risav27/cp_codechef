#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        for(int i = 0 ; i< n/2 ; i++){
            swap(str[i*2] , str[i*2 +1]);
        }
        int i = 0;
        for (char ch : str){
            char a = ch - 'a';
            ch = 'z' -a;
            str[i++] = ch;
        }

        cout<<str<<endl;
    }


return 0;
}
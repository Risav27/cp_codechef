#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n;
    string str;
    cin>>n>>str;
    bool flag1 = 0 , flag0 = 1;
    int oprCout = 0;
    for(int i = 0 ; i<n; i++){
        char c = str[i];
        if(c == '0') flag1 = 0;
        else if((c == '1') && flag1 == 0 ){
            oprCout++;
            flag1 = 1;
        }
    }
    if(flag1 == 1) oprCout --;

    cout<<oprCout<<endl;


}
return 0;
}
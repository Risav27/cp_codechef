#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n;
    cin>>n;
    int i = 0;
    while(1){
        int p  = (i*(i+1))/2;
        if(p>n){
            cout<<i-1<<endl;
            break;
        }
        i++;
    }


}
return 0;
}
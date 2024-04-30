#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int *a = new int;
        * a = 52 /k;
        cout<<52 - k * (*a)<<endl;
        free(a);

    }


return 0;
}
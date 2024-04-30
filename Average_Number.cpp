#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n,k,v;
    cin>>n>>k>>v;
    int sm = 0;
    int arr[n];
    for (int i = 0; i<n; i++){

        cin>>arr[i];
        sm +=arr[i];
    }
    int x = (v*(n+k) - sm)/k;
    if(((v*(n+k) - sm)%k != 0) || x<=0){
        cout<<-1<<endl;
    }
    else cout<<x<<endl;

}
return 0;
}

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[5];
        int p;
        for( int &n : arr){
            cin>>n;
        }
        cin>>p;
        int sum = 0;
        for(int n : arr){
            sum+= n*p;

        }
        if(sum>120) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }


return 0;
}
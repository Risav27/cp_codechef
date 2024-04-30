#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag = 1;
        int arr[n];
        for(int &n : arr) cin>>n;
        for(int i = 0 ; i<n; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i] , arr[i+1]);
            }
        }
        // for(int n : arr) cout<<n<<" ";

        for(int i = 0 ; i<n; i++){
            if(arr[i] > arr[i+1]){
                cout<<"NO\n";
                flag = 0;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }


    }


return 0;
}
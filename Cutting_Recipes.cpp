#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        int arr[n];
        int mn = 1001;
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
            if(mn >= arr[i]) mn = arr[i];
            
        }
        for ( int i = mn ; i>=2; i--){
            int flag = 1;
            for(int s : arr){
                if(s%i != 0){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                for(int j = 0 ; j<n ; j++){
                    arr[j] /= i;
                }
            }

        }
        for(int s : arr){
            cout<<s<<" ";
        }cout<<endl;


    }


return 0;
}
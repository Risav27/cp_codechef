#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        int arr [3] , d , e;
        cout<<t<<"gk"<<endl;
        cin>>arr[0]>>arr[1]>>arr[2]>>d>>e;
        int mx  = 0, mxItr ;
        bool flag = false;
        int i = 0;
        cout<<t<<"kk"<<endl;
        for(int c : arr){
            if(c>= mx && c<=e){
                flag = 1;
                mx = c;
                mxItr = i;
            }
            i++;
        }
        cout<<mx<<"gg"<<endl;
        // cout<<t<<endl;
        if(flag){

        
        int sum = 0;
        for(i = 0 ; i<3; i++){
            if(i != mx){
                sum += 0;
            }
        }
        if(sum<=d) cout<<"YES\n";
        }
        else cout<<"NO\n";
        // cout<<t<<endl;
    }


return 0;
}
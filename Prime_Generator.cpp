#include <bits/stdc++.h>
using namespace std;




int main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long sp,ep;
        cin>>sp>>ep;
        int arr[ep+1] = {0};
        for(int i = 2; i<=ep; i++){
            if(arr[i]==0){
                if(i>=sp)
                cout<<i<<endl;
                for(int j = i; j<=ep; j+=i){
                    arr[j] = 1;
                }
            }
        }
        cout<<endl;

    }


return 0;
}
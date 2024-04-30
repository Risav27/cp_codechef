#include <bits/stdc++.h>
using namespace std;


int main(){
    int t ;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int mxSm = 0 , prevSm = 0;
    while(n--){
        int num;
        cin>>num;
        if(num<0){
            mxSm = max(mxSm,prevSm);
            prevSm += num;
        }
        else{
            if(prevSm<0){
                prevSm = 0;
            }
            prevSm+=num;
        }

    }
        mxSm = max(prevSm , mxSm);
        cout<<mxSm<<endl;
        
    }


return 0;
}
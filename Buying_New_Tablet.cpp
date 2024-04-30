#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n , b;
        cin>>n>>b;
        int mxAr = 0;
        bool flag = false;
        while(n--){
            int h,w,p;
            cin>>h>>w>>p;
            if(p<=b){
                flag = true;
                int ar = h*w;
                mxAr = max(ar,mxAr);
            }

        }
        if(flag) cout<<mxAr<<endl;
        else cout<<"no tablet\n";
    }


return 0;
}
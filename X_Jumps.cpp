#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int x , y;
    cin>>x>>y;

    if(x == y) cout<<1<<endl;
    else if(x<y) cout<<x<<endl;
    else{
        int des =y, mv= 0;
        while(1){
            if(des>x){
                des -=y;
                break;
            }
            des +=y;
            mv++;
        }
        cout<<mv + (x-des)<<endl;
    }


}
return 0;
}
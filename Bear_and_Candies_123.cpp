#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int l,b;
        cin>>l>>b;
        int i = 0;
        while(1){
            if(i%2 == 0 ){
                if(i>b){
                    cout<<"Limak\n";
                    break;
                }
                else b -= i;
            }
            else{
                if(i>l){
                    cout<<"Bob\n";
                    break;
                }
                else l -= i;
            }
            i++;
            
        }
    }


return 0;
}
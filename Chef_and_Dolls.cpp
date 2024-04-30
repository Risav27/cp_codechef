#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        map < int , int > m1;
        int n;
        cin>>n;
        int remm=0;
        while(n--){
            int nu;
            cin>>nu;
            m1[nu]++;
        }
        for(auto itr : m1){
            if(itr.second%2 ==1 ){
                cout<<itr.first<<endl;
            }
        }

    }


return 0;
}
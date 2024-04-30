#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n;
    cin>>n;
    while(n--){
        int len;
        cin>>len;
        map <int , int > m1;
        int arr[len];
        int mx = 0;
        for(int j = 0 ; j <len ; j++){
            int num;
            cin>>num;
            arr[j] = num;
            m1[arr[j]]++;
            
        }
        for(auto itr : m1){
           mx =  max(mx,itr.second);
        }
        cout<<len-mx<<endl;
        
    }


return 0;
}

#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int evenCounter = 0 , oddCounter = 0;
        while(n--){
            int num;
            cin>>num;
            if(num & 1){
                oddCounter ++;
            }
            else{
                evenCounter ++;
            }

            if(oddCounter %2 == 0  && oddCounter != 0){
                oddCounter -=2;
                evenCounter ++;
            }
            if(evenCounter %2 == 0  && evenCounter != 0){
                evenCounter --;
            }
        }

        cout<<evenCounter + oddCounter <<endl;
    }


return 0;
}
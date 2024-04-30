#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int r;
    cin>>r;
    int arr[6];
    for(int &n : arr){
        cin>>n;
    }
    float disab = sqrt(pow((arr[0] - arr[2]),2) + pow((arr[1] - arr[3]),2));
    float disac = sqrt(pow((arr[0] - arr[4]),2) + pow((arr[1] - arr[5]),2));
    float disbc = sqrt(pow((arr[2] - arr[4]),2) + pow((arr[3] - arr[5]),2));

    if(disab <= r && disac <= r) cout<<"yes\n";

    else if((disab <= r && disbc<= r)|| (disac <= r && disbc <= r)){
            cout<<"yes\n";
        }
        else cout<<"no\n";



}
return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define vi              vector <int>
#define vii             vector<vector<int>>
#define mii             map<int , int>
#define rep(i,a,n)      for(int i = a; i<n; i++)
#define pb           push_back
#define ff          first
#define ss          second

typedef long long     ll;

const int MOD  = 1e9 +7 , N = 1e5 +2 ;

int main(){
int t;
cin>>t;
while (t--) {
    int arr[N];
    int n , q;
    cin>>n>>q;
    rep(i , 1, n+1){
        cin>>arr[i];
        // cout<<i<<" ";
    }
    // cout<<"sgg\n";
    int lmt = 61;
    int zarr[lmt][n+1] , oarr[lmt][n+1];
    bool bits[lmt][n+1];
    rep(j,0 , lmt){
        int zctr = 0 , octr = 0;
        rep(i , 1 , n+1){
            int t1 = arr[i] >> j;
            // if(j == 1) cout<<t1<<endl;
            if(t1 & 1){
                oarr[j][i] = ++octr;
                zarr[j][i] = zctr;
                bits[j][i] = 1;
            }
            else{
                zarr[j][i] = ++zctr;
                oarr[j][i] = octr;
                bits[j][i] = 0;
            }
            
        }
    }
    while(q--){
        int k , l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        int o1 , o2, z1 , z2;
        if(bits[k][l1]){
            o1 = oarr[k][r1] - oarr[k][l1] +1;
            z1 = zarr[k][r1] - zarr[k][l1];
        }
        else{
            o1 = oarr[k][r1] - oarr[k][l1] ;
            z1 = zarr[k][r1] - zarr[k][l1] +1;
        }
        if(bits[k][l2]){
            o2 = oarr[k][r2] - oarr[k][l2] +1;
            z2 = zarr[k][r2] - zarr[k][l2];
        }
        else{
            o2 = oarr[k][r2] - oarr[k][l2] ;
            z2 = zarr[k][r2] - zarr[k][l2] +1;
        }
        // for(bool i : bits) cout<<i<<" ";
        // cout<<endl;
        cout<<o1*z2+z1*o2<<endl;
    }


}
return 0;
}
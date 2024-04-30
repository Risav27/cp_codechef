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

// const int P = 101;
// vector <bool> vp(P, 0);

// void check(){
//     int i = 2;
//     while(i*i<= P ){
//         if(!vp[i]){
//             int temp = i*i;
//             while(temp<P){
//                 vp[temp] = true;
//                 temp += i;
//             }
//         }
//         i++;
//     }



// }

//     vector<bool> check(ll P , vector <bool > vp){
//     ll i = 2;
//     while(i*i<= P ){
//         if(!vp[i]){
//             ll temp = i*i;
//             while(temp<=P){
//                 vp[temp] = true;
//                 temp += i;
//             }
//         }
//         i++;
//     }
    
//     return vp;

// }

ll mult(){

    int a = 123456789;
        ll ans =  (ll)a * 12345;

    cout<<ans<<endl;
}

int main(){
    // map<int,int ,greater<int>>m1;
    // m1[2] = 12;
    // m1[3] = 98;
    // m1[5] = 53;
    // m1[-4] = 56;

    // for(auto it : m1)cout<<it.first<<" ";

    // vi a
    // ll p = 1001;
    // vector <bool> vp(p , false);
    // vp = check(p , vp);
    // rep(i , 2 , p){
    //     if(!vp[i]){
    //         cout<<i<<endl;
    //     }
    // }
    // ak.em
    mult();



    // rep(i , 1 , 1213459){
    //     int ans = 9*i;
    //     int temp = ans;
    //     int ttl = 0;
    //     while(temp>0){
    //         int dig = temp%10;
    //         ttl += dig;
    //         temp /= 10;
    //     }
    //     cout<< ans << " "<<ttl<<endl;
    // }

return 0;
}
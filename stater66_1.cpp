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
    int n;
    cin>>n;
    int arr[n];
    rep(i , 0 , n) cin>>arr[i];
    
    int fp = 0 , ep = n-1;
    int opr = 0;
    if(n ==1) {
        cout<<0<<endl;
        continue;
    }
    int temp = n-1;
    int fe = arr[fp] , le = arr[ep];
    // while((ep>=(temp/2)) && (fp<= (temp/2))){
    //     if(fe == le){
            // ep--;
            // fp++;
            // fe = arr[fp];
            // le = arr[ep];
    //         cout<<"here\n";
    //         cout<<fe<<" "<<le<<endl;

    //     }
    //     else if(le > fe){
    //         cout<<"gg1"<<endl;
    //         le = le - fe;
    //         opr++;
    //         if(fp == ep-1){
    //             break;
    //         }
    //         else{
    //         fp++;
    //         fe = arr[fp];
    //         temp++;
    //         }


    //     }
    //     else{
    //         cout<<"sdj"<<endl;
    //         fe = fe - le;
    //         opr++;
            // if(fp == (ep-1)){
            //     break;
            // }
    //         else{
    //             le = arr[ep];
    //             ep++;
    //             fp++;
    //             temp++;
    //         }
    //     }
    //     cout<<temp<<"kdj"<<endl;
    //     cout<<fp<<" "<<ep<<endl;
    // }
    while(ep>=fp){
        // cout<<fp<<" "<<"first"<<ep<<endl;
        if(fe == le){
            // if(fp == ep) break;
            // else if(fp == ep-1) break;
            ep--;
            fp++;
            fe = arr[fp];
            le = arr[ep];
            // cout<<"here"<<endl;
        }
        else if(le > fe){
            le = le-fe;
            opr++;
            if(fp == (ep-1)){
                break;
            }
            else{
            fp++;
            fe = arr[fp];

            }

        }
        else{
            fe = fe-le;
            opr++;
            if(fp == (ep-1)) break;
            else{
                le = arr[--ep];
            }
        }
        // cout<<fp<<" "<<"lkdjs"<<ep<<endl;
        // cout<<fe<<" "<<le<<"jds"<<endl;
    }
    cout<<opr<<endl;



}
return 0;
}
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        int sum =0, find=0, ttl=0;
        for(int i = 0 ; i<n ; i++){
            if(i == 0){
                if(str[i] == str[i+1])
                find++;

            }
            else if(i == n-1){
                if(str[i] == str[i-1]){
                    find++;
                    sum +=find;
                    ttl++;
                }
                else{
                    if(n != 2 && find != 0){
                        sum += find;
                        ttl++;
                    }
                }
            }
            else{
                if(str[i] == str[i-1]){
                    if(str[i] == str[i+1]){
                        find++;
                    }
                    else{
                        find++;
                        sum+=find;
                        ttl++;
                        find = 0;
                    }
                }
                else if(str[i] == str[i+1]){
                    find++;
                }
            }

            // cout<<find<<" "<<ttl<<" " << sum<<endl;
        }

        cout<<sum-ttl<<endl;
    }


return 0;
}
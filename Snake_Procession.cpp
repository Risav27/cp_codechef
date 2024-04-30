#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        stack<char>stk;
        bool flag = true;
        for(int i = 0 ; i<n; i++){
            char ch = str[i];
            cout<<"gg"<<endl;
            if(ch == '.'){
                continue;
            }
            if(stk.empty() && ch == 'T'){
                flag = false;
                break;
            }
            // cout<<"gg"<<endl;
            else if(stk.empty() && ch == 'H'){
                stk.push(ch);
                // cout<<"yes"<<endl;
            }
            else if(stk.top() == 'H'){
                // cout<<"ens"<<endl;
                if(ch == 'H'){
                    flag = false;
                    break;
                }
                else if(ch == 'T') {
                    stk.pop();
                    // cout<<"heres"<<endl;
                }
            }
            cout<<"gg"<<endl;
        }
        if(stk.empty() && flag){
            cout<<"Valid\n";
        }
        else cout<<"Invalid\n";
    }


return 0;
}
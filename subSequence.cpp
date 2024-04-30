#include <bits/stdc++.h>
using namespace std;


int main(){
    string sr = "Risav";
    string s = "av";
    auto itr = find(sr.begin(),sr.end() , 'a');
    if(itr != sr.end()) cout<<"yes"<<endl;
    cout<<sr.find(s)<<endl;


return 0;
}
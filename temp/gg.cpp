#include <bits/stdc++.h>
using namespace std;


bool compare(int a , int b){
    return a<b;
}


int main(){
// stack <char>stk;
// stk.push(12);
// stk.push('a');
// cout<<stk.top()<<endl;

// string a;
// cin>>a;
// cout<<a;

// for(auto ch : a){
//     cout<<ch<<endl;
// }
// vector <int> v1;
// v1.push_back(12);
// v1.push_back(12);
// v1.push_back(12);
// cout<<v1.end()-v1.begin()<<endl;

// int n = 10, p = 3;
// float div = (n*1.0)/p;
// cout<<div<<endl;

vector <int> vi;
vi.push_back(12);
vi.push_back(34);
vi.push_back(4);
vi.push_back(8);
vi.push_back(8);
sort(vi.begin() , vi.end() , compare);

for(int i : vi) cout<<i<<" ";



return 0;
}
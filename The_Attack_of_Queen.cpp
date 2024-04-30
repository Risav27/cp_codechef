#include <bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--) {
    int n, x,y;
    cin>>n>>x>>y;
	    int num0=2*(n-1);
	    int num1=(n-1)-abs((n+1)-(x+y));
	    int num2=n-(abs(x-y)+1);
	    cout<<num0+num1+num2<<endl;




}
return 0;
}
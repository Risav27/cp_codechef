#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(((a&1) && (b&1) &&(c&1) ) || (a%2 == 0 && b%2 == 0 && c%2 ==0) ){
	        cout<<"NO\n";
	    }
	    else cout<<"YES\n";
	}
	return 0;
}

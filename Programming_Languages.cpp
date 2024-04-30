#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    for(int i = 0 ; i<n; i++){
        int a , b;
        cin>>a>>b;
        bool flag = false;
        for(int i = 1 ; i<=2 ; i++){
            int x,y;
            cin>>x>>y;
            if((a == x && b == y) || (a==y && b == x)){
                cout<<i<<endl;
                flag = true;
            } 

        }
        if( ! flag){
            cout<<0<<endl;
        }
    }

	return 0;
}

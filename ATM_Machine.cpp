#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int pp , total;
        cin>>pp>>total;
        for(int j = 0; j<pp ; j++){
            int unt;
            cin>>unt;
            if(unt<=total){
                total -= unt;
                cout<<1;

            }
            else{
                cout<<0;
            }
            
        }cout<<endl;

    }
    

	return 0;
}

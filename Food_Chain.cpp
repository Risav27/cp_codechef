#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int e,k;
        cin>>e>>k;
        int c=0;
        while(e>0)
        {
            c++;
            e=e/k;
        }
        cout<<c<<endl;
    }

	// your code goes here
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;

    for(int i = 0 ; i<n; i++){
        int mxt , mxn , mxsm;
        cin>>mxt>>mxn>>mxsm;
        int div = mxsm/mxn;
        int rmd = mxsm - mxn*div;
        int sum = 0;
        if(div>=mxt){
            for(int j = 0 ; j<mxt ; j++){
                sum += mxn*mxn;
            }
            sum+=rmd*rmd;
        
        }
        else{

            for(int j = 0 ; j<div ; j++){
                sum += mxn*mxn;
            }
            sum+=rmd*rmd;

        }
        cout<<sum<<endl;

    }
	return 0;
}

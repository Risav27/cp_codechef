#include <bits/stdc++.h>
using namespace std;


int main() {
	int t,i,n;
	cin>>t;
	while(t--)
	{
	    string b;
	    cin>>n;
	    cin>>b;
	    int num=0;
	    for(i=0;i<n;i++)
	    {
	        if(b[i]=='1')
	          num++;
	    }
	    if((120-n+num)>=90)
	        cout<<"YES"<<endl;
	    else 
	         cout<<"NO"<<endl;
	}
	return 0;
}
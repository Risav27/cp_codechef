#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    string a;
	    cin>>a;
	    for(int i=0;i<n/2;i++)
	    {
	        if(a[i] != a[n-1-i])
	        {
	            c++;
	        }
	    }
	    if(c%2==0) cout<<(c/2)<<endl;
	    else cout<<(c/2)+1<<endl;
	}
	return 0;
}
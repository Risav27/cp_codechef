#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int size = s.length();
	    int point = 0, no_point=0;
	    
	    
	    for(int i=0; i<size; i++)
	    {
	        if(s[i]=='1')
	        {
	            point++;
	        }
	        else
	        {
	            no_point++;
	        }
	    }
	    
	    if(point > no_point)
	    {
	        cout<<"WIN"<<endl;
	    }
	    else
	    {
	        cout<<"LOSE"<<endl;
	    }
	}
	return 0;
}

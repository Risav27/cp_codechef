#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string ans = "1";
        if(n == 3){
            ans = "010";
        }
        else{
        for (int i = 0; i < n-2; i++)
        {
            ans += "0";
        }
     
            ans += "1";
        }
        cout << ans << endl;
        
    }

    return 0;
}
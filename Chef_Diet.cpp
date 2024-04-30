#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        bool fg = true;
        int rem = 0;
        for (int i = 1; i < n + 1; i++)
        {
            int num;
            cin >> num;
            if (num + rem >= k)
            {
                rem += num - k;
            }
            else if ((num + rem) < k)
            {
                fg = false;
                cout << "NO " << i << endl;
                // break;
            }
            // cout<<rem<<endl;
        }
        if (fg)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
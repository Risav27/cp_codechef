#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        vector <int> temp;
        while (n--){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        n = temp.size();
        int total = 0;
        for(int i = 0 ; i<n; i++){
            int sum = 0 , mult = 1;
            for(int j = i ; j<n; j++){
                sum += temp[j];
                mult *= temp[j];
            if(sum == mult){
                total ++;
            }
            }
        }
        cout<<total<<endl;
    }

    return 0;
}
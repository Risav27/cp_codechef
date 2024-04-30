#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> bl;
    vector<int> rd;
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin>>len;
        for (int i = 0; i < len; i++)
        {
            int num;
            cin >> num;
            rd.push_back(num);
        }
        for (int i = 0; i < len; i++)
        {
            int num;
            cin >> num;
            bl.push_back(num);
        }
        int redCtr = 0, blCtr = 0;
        while (rd.size() != 0)
        {
            int mxr = 0, mxitrr;
            int mxb = 0, mxitrb;
            for (int i = 0; i < rd.size(); i++)
            {
                if (mxb <= bl[i])
                {
                    mxb = bl[i];
                    mxitrb = i;
                }
                if (mxr < rd[i])
                {
                    mxr = rd[i];
                    mxitrr = i;
                }
            }
            if (mxitrb != mxitrr)
            {
                redCtr += mxr;
                blCtr += mxb;
                bl.erase(bl.begin() + mxitrb);
                rd.erase(rd.begin() + mxitrr);
            }
            else
            {
                if (redCtr > blCtr)
                {
                    blCtr += mxb;
                    // bl.erase(bl.begin() + mxitrb);
                    // rd.erase(rd.begin() + mxitrr);
                }
                else if (redCtr < blCtr)
                {
                    redCtr += mxr;
                    // bl.erase(bl.begin() + mxitrb);
                    // rd.erase(rd.begin() + mxitrr);
                }
                else
                {
                    if (mxr > mxb)
                    {
                        blCtr += mxb;
                    }
                    else
                    {
                        redCtr += mxr;
                    }
                }

                bl.erase(bl.begin() + mxitrb);
                rd.erase(rd.begin() + mxitrr);
            }
        }

        if(redCtr<blCtr){
            cout<<redCtr<<endl;
        }
        else cout<<blCtr<<endl;
    }

    return 0;
}
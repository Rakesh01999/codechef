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
        string s;
        cin >> s;
        int cnt1 = 0, cnt0 = 0, good = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
            if (cnt1 >= cnt0)
            {
                good++;
                // cnt0=0;
                // cnt1=0;
            }
        }
        cout << good << endl;
    }

    return 0;
}
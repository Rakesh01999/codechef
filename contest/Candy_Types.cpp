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
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        auto it = prev(mp.end());
        // cout << it->first << " " << it->second << endl;

        for (auto itr : mp)
        {
            // cout<<itr.first<<" "<<itr.second<<endl;
            if (itr.second == it->second)
            {
                v.push_back(itr.first);
            }
        }

        cout << v[0] << endl;
    }

    return 0;
}
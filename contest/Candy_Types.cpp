#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++){
            int x;cin >> x;
            mp[x]++;
        }

        int max = 0;
        for(auto it1:mp){
            if(it1.second > max){
                max = it1.second;
            }
        }

        // cout<<"max : "<<max<<endl;
        
        for (auto itr : mp){
            // cout<<itr.first<<" "<<itr.second<<endl;
            if (itr.second == max)
            {
                v.push_back(itr.first);
            }
        }

        cout << v[0] << endl;
    }

    return 0;
}
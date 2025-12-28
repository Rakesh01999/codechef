#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while(t--){
        ll n;cin >> n;
        vector<ll> a(n);
        vector<ll> c(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        ll res = a[0] * c[0];

        for (int i = 1; i < n; i++)
        {
            c[i] = min(c[i], c[i - 1]);
            res += a[i] * c[i];
        }
        cout << res << endl;
    }

    
    return 0;
}

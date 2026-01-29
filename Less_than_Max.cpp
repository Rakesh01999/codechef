#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        int cnt = 0, mx = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= mx + 1) {
                cnt++;
                mx = max(mx, a[i]);
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
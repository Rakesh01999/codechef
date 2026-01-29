#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, k;cin >> n >> x >> k;

    int ans = INT_MAX;

    for (int i = 0; i <= n; i += k) {
        ans = min(ans, abs(x - i));
    }

    cout << ans << endl;
}

int main() {
    int t;cin >> t;
    while (t--) {
        solve();
    }

    
    return 0;
}

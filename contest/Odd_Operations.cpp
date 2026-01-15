#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool hasOdd(ll x) {
    while (x > 0) {
        if ((x % 10) & 1) return true;
        x /= 10;
    }
    return false;
}

int maxDigit(ll x) {
    int mx = 0;
    while (x > 0) {
        mx = max(mx, int(x % 10));
        x /= 10;
    }
    return mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;
    while(t--) {
        ll n;cin >> n;

        if (n % 2 == 1) {
            cout << 0 << "\n";
            continue;
        }

        ll cur = n;
        int ops = 0;

        while (cur > 0) {
            if (hasOdd(cur)) {
                cout << ops + 1 << "\n"; 
                goto done;
            }
            int d = maxDigit(cur);
            cur -= d;
            ops++;
        }

        cout << -1 << "\n";
    done:;
    }
    
    return 0;
}

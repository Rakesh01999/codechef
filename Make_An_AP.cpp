#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long g = 0;

        // Compute GCD of all differences
        for (int i = 1; i < N; i++) {
            g = __gcd(g, A[i] - A[i - 1]);
        }

        long long ans = 0;

        // Count required insertions
        for (int i = 1; i < N; i++) {
            ans += (A[i] - A[i - 1]) / g - 1;
        }

        cout << ans << "\n";
    }

    return 0;
}

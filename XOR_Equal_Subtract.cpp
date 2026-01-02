#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin >> t;

    while(t--){
        int n ; cin >> n;
        vector<int> A(n);
        for(int i=0;i<n;i++)
            cin >> A[i];

        sort(A.begin(), A.end());

        vector<int>dp(n,1);
        int ans = 1;

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if( (A[j] & A[i]) == A[j]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            ans = max(ans, dp[i]);
        }

        cout << ans << "\n";
    }
    

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, m;cin >> n >> m;

        vector<int> A(n), B(m);
        for(int &x : A) 
            cin >> x;
        for(int &x : B)
            cin >> x;

        sort(B.begin(), B.end());

        long long ans = 0;
        for(int i = 0; i < n; i++){
            ans += lower_bound(B.begin(), B.end(), A[i]) - B.begin();
        }

        cout << ans << "\n";
    }

    
    return 0;
}

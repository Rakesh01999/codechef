#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){

    int n, a, b;
    cin >> n >> a >> b;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    bool wear = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] < a && !wear) {
            cnt++;
            wear = true;
        }
        if (arr[i] > b && wear) {
            wear = false;
        }
    }

    cout << cnt << "\n";
    }

    return 0;
}

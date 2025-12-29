#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--){
        ll n,m;cin>>n>>m;
        if(n<=m && m<=(3*n) && (m-n)%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    

    return 0;
}

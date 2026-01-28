#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x, k;cin>>n>>x>>k;
    
    if(x%k==0){
        cout<<0<<endl;
    }
    else{
        if(k>x){
            int ans1 = min(x, (n-k));
            // cout<<"ans1 :"<<ans1<<endl;
            int ans = min(abs(k-x), ans1);
            cout<<ans<<endl;
        }
        else if(x>k){
            int r = x%k;
            int res = k*r - x;
            int ans = min(abs(k-x), min((n-k), min(k, k-res)));
            cout<<ans<<endl;
        }
    }
}

int main(){
    
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
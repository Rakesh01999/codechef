#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    map<int , int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    int most_freq_cnd = 0;
    int most_freq_clr = INT_MAX;
    
    for(auto it:mp){
       if(it.second > most_freq_cnd){
           most_freq_cnd = it.second;
           most_freq_clr = it.first;
       }
       if(it.second == most_freq_cnd && it.first < most_freq_clr){
           most_freq_clr = it.first;
       }
    }
    cout<<most_freq_clr<<endl;
    
}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
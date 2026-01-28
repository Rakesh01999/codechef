#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int x,y,z;cin>>x>>y>>z;
    int ans1 = min(x,z);
    // if(y%2==0){
    //     cout<<ans1+(y/2)<<endl;
    // }
    // else{
    //     cout<<0<<endl;
    // }
    cout<<ans1+(y/2)<<endl;
    }
    return 0;
}
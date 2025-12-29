#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){

    int n;cin>>n;
    int sum=0, itr=n;
    while (itr--)
    {
        int val;cin>>val;
        sum+=val;
    }
    if(sum<0){
        int x = abs(sum)/n;
        if((abs(sum)%n) != 0)
            x++;

        cout<<x<<endl;
    }
    else
        cout<<0<<endl;
}

    return 0;
}
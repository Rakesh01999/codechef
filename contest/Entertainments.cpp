#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    if((n*200 >= 1000))
        cout<<1000<<endl;
    else
        cout<<(n*200)<<endl;
    return 0;
}
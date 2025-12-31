#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    if((m/n) >= 2)
        cout<<n<<endl;
    else{
        cout<<(m/n) +1<<endl;
    }
    
    return 0;
}
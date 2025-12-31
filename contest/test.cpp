#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    deque<int> a(n), a1(n), a2(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    a2=a;
    a1=a;

    int itr=n-1;
    int max = 0;
    while (itr--)
    {
        max = a2[n-2]+a2[n-1]*2;
        a2.pop_back();
        a2.pop_back();
        a2.push_back(max);
        n--;
    }
    
    
    return 0;
}
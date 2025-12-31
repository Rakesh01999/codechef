#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){

        float a, b;cin>>a>>b;
        float area1 = 10*10;;   
        float area2 = 15*15;   
        
        if((a/area1) < (b/area2)){
            cout<<"Small"<<endl;
        }
        else if((a/area1) > (b/area2)){
            cout<<"Large"<<endl;
        }
        else{
            cout<<"Equal"<<endl;
        }
    }
    return 0;
}
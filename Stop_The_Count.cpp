#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        
        int ways = 0;
        int chef_votes = 0, antichef_votes = 0;
        
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                chef_votes++;
            } else {
                antichef_votes++;
            }
            
            if(chef_votes > antichef_votes){
                ways++;
            }
        }
        
        cout << ways << endl;
    }
    
    return 0;
}
#include"bits/stdc++.h"
using namespace std;

void solve(){
    vector<char> v;
    int n;
    string s;
    cin >> n >> s;
    for(int i = 0; i<n; i++) {
        if(s[i]==s[i+1]){
            continue;
        }else{
            for(auto& it : v){
                if(it == s[i]){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            v.push_back(s[i]);
        }
    }
    cout<<"YES"<<endl;
    return ;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        
        solve();
    }
    return 0;
}
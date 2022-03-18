#include"bits/stdc++.h"
using namespace std;
typedef long long ll;


int main(){
    ll n;
    int count =0; 
    bool k = true;
    cin>>n;
    
    string s;
    s = to_string(n);
    for(int i=0; i<s.length(); i++) {
        if(s[i] == '4'|| s[i] == '7'){
            count++;
            continue;
        }
    }
    
    if(count== 4 || count == 7){
        
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
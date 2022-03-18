#include"bits/stdc++.h"
using namespace std;

int main() {
    string n, m;
    int i, j, len;
    cin >> n >> m;
    len = n.length();
    vector<string> v;
    for(i = 0; i < len; i++){ 
        if(n[i]!=m[i]){
            v.push_back("1");
        }else{
            v.push_back("0");
        }
    }
    vector<string> :: iterator it = v.begin();
    for(it = v.begin(); it!=v.end(); ++it){
        cout<<(*it);
    }

    return 0;
}
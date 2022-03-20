#include"bits/stdc++.h"
using namespace std;

int main() {
    // string s1, s2, s3;
    // cin >> s1 >> s2 >> s3;
    string t, p, m; 
    int hash1[128] = {0}; 
    int hash2[128] = {0};
    cin>>t>>p>>m;
    for(int i = 0; i<t.length(); i++) {
        hash1[t[i]] = hash1[t[i]] + 1;
    }
    for(int i = 0; i<p.length(); i++) {
        hash1[p[i]] = hash1[p[i]] + 1;
    }
    for(int i = 0; i<m.length(); i++) {
        hash2[m[i]] = hash2[m[i]] + 1;
    }
    // if values of both the hash are same print "YES" else print "NO"
    // for(int j=0; j<128; j++) {
    //     cout << hash1[j];
    // }
    // cout<<endl;
    // for(int j=0; j<128; j++) {
    //     cout << hash2[j];
    // }
    // cout<<endl;
    for(int i = 0; i<128; i++) {
        if(hash1[i]!=hash2[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
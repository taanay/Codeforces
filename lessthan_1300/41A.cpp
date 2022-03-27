// check if given string 't' is reverse of string 's'
#include"bits/stdc++.h"
using namespace std;
int main() {
    string s,t;
    cin >> s;
    cin >> t;
    int len, i, j;
    len = s.length();
    for(i=0,j=len-1; i<len; i++,j--){
        // cout<<s[j]; //print reverse of string
        if(s[j]!=t[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
#include"bits/stdc++.h"
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int len = s1.length();
    for(int i=0; i<s1.length(); i++) {
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }
    
    for(int j = 0; j<len; j++) {
        if(s1[j] == s2[j]){
            continue;
        }else if(s1[j]>s2[j]){
            cout<<"1";
            return 0;
        }else{
            cout<<"-1";
            return 0;
        }
    }
    cout<<"0";
    return 0;
}
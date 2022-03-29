#include<bits/stdc++.h>
using namespace std;
int main() {
    int i=0, len, count=0;
    string s, k;
    cin >> s;
    len = s.length();
    for(i = 0; i<len; i++){
        if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
            if(count==2) {
                cout<<" ";
                count = 1;
            }
            i=i+2;
        }
        else{
            cout<<s[i];
            count = 2;
        }
    }
    return 0; 
}
#include"bits/stdc++.h"
using namespace std;
int main() {
    int len,i;
    string s;
    cin >> s;
    len  = s.length();
    if(len==1 && s[0]=='1'){
        cout<<"YES";
        return 0;
    }
    if(s[0]!='1'){
        cout<<"NO";
        return 0;
    }
    if(s[len-1]!='1' && s[len-1]!='4'){
        cout << "NO";
        return 0;
    }
    if(s[len-2]!='1' && s[len-2]!='4'){
        cout<<"NO";
        return 0;
    }
    for(i = 1; i<=len-3; i++) {
        if(s[i]=='4' && s[i+1]=='4' && s[i+2]=='4'){
            cout<<"NO";
            return 0;
        }
        if(s[i]!='1' && s[i]!='4'){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
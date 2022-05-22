#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int len = s.length();
        // if(len==1){
        //     cout<<s<<nl;
        // }
        if(s[0]==s[len-1]){
            cout<<s<<nl;
        }
        else if(s[0] != s[len-1]) {
            s[len-1] = s[0];
            cout<<s<<nl;
        }
    }
    return 0;
}
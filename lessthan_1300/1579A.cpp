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
        int a, b, c; 
        a=b=c=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
            else c++;
        }
        if(a+c == b) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}
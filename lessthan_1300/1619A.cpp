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
        int n = s.length();
        if(n%2!=0){
            cout<<"NO"<<nl;
            continue;
        }
        int f=0;
        for(int i=0, j=n/2; i<n/2, j<n; i++, j++) {
            if(s[i]!=s[j]){
                f = 1;
                break;
            }
        }
        if(f==0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
    return 0;
}
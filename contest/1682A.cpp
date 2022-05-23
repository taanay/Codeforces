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
        int n;
        string s;
        cin >> n >> s;
        int count=0;
        for(int i=(n+1)/2;i<n;i++) {
            if(s[i]!=s[n/2]) break;
            count+=2;
        }
        count += n%2;
        cout<<count<<nl;
    }
    return 0;
}
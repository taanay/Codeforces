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
        unordered_map<char, int> m;
        for(int i = 0; i<s.length(); i++) {
            m[s[i]]++;
        }
        for(auto it : m) {
            int k = it.second;
            while(k--) 
                cout<<it.first;
        }
        cout<<nl;
    }
    return 0;
}
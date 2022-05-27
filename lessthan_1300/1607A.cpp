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
        string s, k;
        cin >> s >> k;
        unordered_map<char, int> map;
        for(int i=0; i<26; i++) {
            map[s[i]] = i+1;
        }
        int sum = 0;
        for(int i=0; i<k.length()-1; i++) {
            sum += abs(map[k[i]] - map[k[i+1]]);
        }
        cout<<sum<<nl;
    }
    return 0;
}
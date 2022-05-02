#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve() {
    string s;
    cin >> s;
    char mi = 'z';
    int ind;
    for(int i = 0; i<s.length(); i++) {
        if(s[i] <= mi){
            mi = s[i];
            ind = i;
        }
    }
    s.erase(ind, 1);
    cout<<mi<<" "<<s<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
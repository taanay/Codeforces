#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

string solve(string s) {
    deque<char> dq;
    char maxi = 'a';
    for(int i=0; i<s.length(); i++) {
        maxi = max(maxi, s[i]);
        dq.pb(s[i]);
    }
    for(char ch = maxi; ch>='a'; ch--){
        if(dq.size()==0) {
            return "NO";
        }
        if(dq.front()==ch) dq.pop_front();
        else if(dq.back()==ch) dq.pop_back();
        else{
            return "NO";
        }
    }
    if(dq.size()==0) return "YES";
    else return "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        cout<<solve(s)<<nl;
    }
    return 0;
}
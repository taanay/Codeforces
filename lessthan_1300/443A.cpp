#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    set<char> d;
    getline(cin, s);
    for(int i = 0; i<s.length(); i++) {
        if(s[i]>='a' && s[i]<='z'){
            d.insert(s[i]);
        }
    }
    cout<<d.size();
    return 0;
}
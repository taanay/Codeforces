#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int solve(string s, int n) {
    string t = s;
    int count = 0;
    sort(t.begin(), t.end());
    for(int i=0; i<n; i++) {
        if(s[i]!=t[i])
            count++;
    }
    return count;
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >>s;
        cout<<solve(s, n)<<endl;
    }
    return 0;
}
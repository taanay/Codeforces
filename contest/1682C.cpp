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
        cin >> n;
        int a[n];
        map<int , int> m;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        int count = 0;
        int ans = 0;
        for(auto it : m ) {
            if(it.second >=2) {
                ans++;
            }
            else {
                count++;
            }
        }
        if(count>0) {
            count--;
            ans++;
        }
        ans += count /2;
        cout<<ans<<nl;
    }
    return 0;
}
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
        unordered_map<int, int> map;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            map[abs(a[i])]++;
        }
        int count = 0;
        for(auto [x,y] : map) {
            if(x==0) count+=1;
            else count += min(2,y);
        }
        cout<<count<<nl;
    }
    return 0;
}
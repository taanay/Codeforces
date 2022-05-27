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
        int n, a;
        cin >> n;
        if(n%7==0){
            cout<<n<<nl;
            continue;
        }
        n = n/10;
        n = n*10;
        // cout<<n;
        for(int i=0; i<=9; i++) {
            a = n+i;
            if(a%7==0) break;
        }
        cout<<a<<nl;
    }
    return 0;
}
#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long n, total=0;
        cin >> n;
        for(int i = 1; i<=9; i++) {
            ll x=0;
            for(int j = 1; j<=10; j++){
                x = x*10+i;
                if(x<=n) total++;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
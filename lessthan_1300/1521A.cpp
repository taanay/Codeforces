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
        ll A, B;
        cin >> A >> B;
        if(B!=1) {
            cout<<"YES"<<nl;
            cout<<A*B<<" " <<A<<" "<<(B+(ll)1)*A<<nl;
        }
        else {
            cout<<"NO"<<nl;
        }
    }
    return 0;
}
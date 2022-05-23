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
        int n, c1=0, c2=0, x;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x==1) c1++;
            else c2++;
        }
        int a1=0, a2=0;
        if(c2%2==1) a1+=2;
        if(a1==0) {
            if(c1%2==0) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else {
            if(c1>=2) {
                if((c1-2)%2==0) cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }
            else {
                cout<<"NO"<<nl;
            }
        }
    }
    return 0;
}
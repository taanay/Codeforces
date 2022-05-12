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
        string s;
        cin >> s;
        int c1=0, c2=0;
        for(int i = 0; i<s.length(); i++) {
            if(i<=2){
                c1 += (int)s[i];
            }
            else{
                c2 += (int)s[i];
            }
        }
        if(c1==c2) {
            cout<<"YES" <<endl;
        }
        else{
            cout<<"NO" <<endl;
        }
    }
    return 0;
}
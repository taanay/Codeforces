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
        string s, s1, s2;
        cin >> n >> s;
        s1 = s; s2 = s;
        if(s[0]=='?') {
            s1[0] = 'B';
            s2[0] = 'R';
        }
        for(int i=1; i<n; i++) {
            if(s1[i]=='?'){
                if(s1[i-1]=='B') s1[i] = 'R';
                else s1[i] = 'B';
            } 
            if(s2[i]=='?'){
                if(s2[i-1]=='B') s2[i] = 'R';
                else s2[i] = 'B';
            }
        }
        int c1=0, c2=0;
        for(int i = 0; i<n-1; i++) {
            if(s1[i]==s1[i+1]) c1++;
            if(s2[i]==s2[i+1]) c2++;
        }
        c1<=c2?cout<<s1<<nl:cout<<s2<<nl;
    }
    return 0;
}
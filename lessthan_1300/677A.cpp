#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, h, count = 0, x;
    cin >> n >> h;
    for(int i = 0; i<n; i++) {
        cin >> x;
        if(x>h) count += 2;
        else count++;
    }
    cout<<count<<endl;
    return 0;
}
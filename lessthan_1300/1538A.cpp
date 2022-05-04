#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve(int a[], int n){
    int ma= INT_MIN, mi= INT_MAX;
    for(int i = 0; i<n; i++){
        ma = max(ma, a[i]);
        mi = min(mi, a[i]);
    }
    int left_ma, left_mi;
    for(int i = 0; i<n; i++) {
        if(a[i]==ma) {
            left_ma = i+1;
        }
        if(a[i]==mi) {
            left_mi = i+1;
        }
    }
    int right_ma = n-left_ma+1;
    int right_mi = n-left_mi+1;

    int a1 = max(right_ma, right_mi);
    int a2 = max(left_ma, left_mi);

    int a3 = min(left_ma+right_mi, left_mi+right_ma);
    cout<<min(a3, min(a1,a2))<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++) {
            cin >> a[i];
        }
        solve(a, n);
    }
    return 0;
}
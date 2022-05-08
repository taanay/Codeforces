#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int solve(int a[], int n, int mi) {
    int count=0;
    for(int i = 0; i<n; i++) {
        if(a[i]>mi){
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, mi = INT_MAX;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i]<mi){
                mi=a[i];
            }
        }
        cout<<solve(a, n, mi)<<endl;
    }
    return 0;
}
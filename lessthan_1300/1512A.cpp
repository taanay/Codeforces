#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int solve(int a[], int n) {
    if(n==1) {
        return 1;
    }
    if(n==2) {
        return 0;
    }
    if(a[0]==a[1] && a[0] != a[2]){
        return 2;
    }
    if(a[0]==a[2] && a[0]!=a[1]){
        return 1;
    }
    if(a[1] == a[2] && a[0] != a[1]){
        return 0;
    }
    for(int i = 3; i<n; i++) {
        if(a[i] != a[i-1]){
            return i;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+9];
        for(int j = 0; j<n; j++) {
            cin >>a[j];
        }
        cout<<solve(a, n)+1<<endl;
    }
    return 0;
}
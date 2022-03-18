#include"bits/stdc++.h"
using namespace std;
 
int solve(int a[], int n, int k) {
    int i, count=0;
    int res = a[k-1]; 
    if(res<0) {
        return 0;
    }
    for(i=0; i<n; i++) {
        if(a[i]>0 && a[i]>= res) {
            count++;
        }
    }
    return count ;
}
 
int main() {
    int n, k,i;
    cin >> n >> k;
    int a[n];
    for(i=0; i<n; i++) {
        int val;
        cin >> val;
        a[i] = val;
    }
    cout << solve(a, n, k);
    return 0;
}
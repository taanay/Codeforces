#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, min, k, ind= 0;
    cin >> n;
    int a[n+1];
    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }
    min = abs(a[0]-a[1]);
    for(int j = 1; j<=n; j++) {
        k = abs(a[j%n]-a[(j+1)%n]);
        if(k<min) {
            ind = j;
            min = k;
        }
    }
    if(ind == n-1) {
        cout<< n << " " << 1;
    }else{
        cout<< ind+1 << " " << ind + 2;
    }
    return 0;
}
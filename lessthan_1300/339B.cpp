// hop count in circular array 
#include"bits/stdc++.h"
using namespace std;
int main() {
    long long n, m, val, count = 0, i, j;
    cin >> n >> m;
    long long a[m+1];
    for(j = 1; j<=m; j++){
        cin >> a[j];
    }
    count = a[1]-1;
    for(i=2; i<=m; i++) {
        if(a[i]<a[i-1]){
            count += (n-a[i-1]) + (a[i] - 1) + 1;
        }
        if(a[i]>a[i-1]) {
            count += a[i] - a[i-1];
        }
        if(a[i]==a[i-1]){
            continue;
        }
    }
    cout<<count;
    return 0;
}
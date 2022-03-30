#include"bits/stdc++.h"
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    if(n==1){
        cout<<1;
        return 0;
    }
    a[0] = n;
    for(int i = 1; i<n; i++){
        a[i] = i;
    }
    for(int i = 0; i<n; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
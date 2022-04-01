#include"bits/stdc++.h"
using namespace std;

int solve(int a[], int n){
    int total = 0;
    for(int i = 0; i<n; i++) {
        total = total + a[i];
    }
    if(total<=0){
        return 1;
    }
    else{
        if(total-n<0){
            return 1;
        }else{
            return total-n;
        }
    }
}

int main() {
    int t,val;
    cin >> t;
    while(t--) {
        cin >> val;
        int a[val];
        for(int i = 0; i<val; i++) {
            cin >> a[i];
        }
        cout<<solve(a, val)<<endl;
    }
    return 0;
}
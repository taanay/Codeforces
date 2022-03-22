#include"bits/stdc++.h"
using namespace std;

int emp(int a[], int n, int m) {
    for(int i = 1; i <= n; i++) {
        if(a[i]==0){
            continue;
        }else {
            return 0; // array is not empty "FALSE"
        }
    }
    return 1; // array is empty "TRUE"
}

int candy(int a[], int n, int m) {
    int k=0;
    while(1){
        if(emp(a, n, m)){
            break; //for now
        }else{
            for(int i = 1; i <= n; i++){
                if(a[i]<=m){
                    a[i] = 0;
                    continue;
                }else{
                k=i;
                a[i] = a[i]-m;
                }
            }
        }
    }
    return k;
}

int main() {
    int n, m, i, j, val;
    cin>>n>>m;
    int a[n+1];
    for(i = 1; i<=n; i++) {
        cin >> val;
        a[i] = val;
    }
    j = candy(a, n, m);
    if(j==0){
        cout<<n;
    }else{
        cout<<j;
    }
    return 0;
}
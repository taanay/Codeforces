#include"bits/stdc++.h"
using namespace std;

const int temp = 1e5+10000;
int a[temp];

void fibonacci() {
    a[0] = a[1] = 1;
    for(int i=2; i<=temp; i++) {
        a[i] = a[i-1] + a[i-2];
        if(a[i]>1e9){
            break;
        }
    }
}

int main() {
    int n;
    fibonacci();
    cin>>n;
    if(n<=2) {
        cout<<" 0 0 "<<n;
    }
    else{
        int i;
        for(i=1; i<n; i++){
            if(a[i]==n){
                break;
            }
        }
        cout<<a[i-4]<<" "<<a[i-3]<<" "<<a[i-1];
    }
    return 0;
}
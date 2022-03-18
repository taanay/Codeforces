#include"bits/stdc++.h"
using namespace std;
// 1==prime 0==not prime
int isprime(int n) {
    if(n<2) { 
        return 0;
    }
    for(int i=2; i<=n/2; i++) {
        if(n%i == 0) {     
            return 0;
        }
    }
    return 1;
}

void solve(int n, int m){
    if(isprime(n)==0 || isprime(m)==0){
        cout<<"NO";
        return;
    }
    for(int i=n+1; i<m; i++){
        if(isprime(i)==1){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
}


int main() {
    int n, m;
    cin >> n >> m;
    solve(n, m);
    return 0;
}
#include"bits/stdc++.h"
using namespace std;
int main() {
    int n, a, b;
    cin>>n>>a>>b;
    if(n-a == 1){
        cout<<1;
    }
    else if(n-a < b){
        cout<<n-a;
    }
    else if(a+b == n){
        cout<<n-a;
    }
    else if(n-a > b){
        cout<<b+1;
    }

    return 0;
}
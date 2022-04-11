#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

int main() {
    int n, m, i, j;
    cin >> n;
    m = n*n;
    for(i=1,j=m; i<j; i++,j--){
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}
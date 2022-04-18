#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, k, a, b, sum = 0;
    cin >> n;
    int t[n];
    for(int i = 1; i<n; i++){
        cin >> t[i];
    }
    cin >> a >> b;
    k = b - a;
    for(int j = a; k--; j++){
        sum = sum + t[j];
    }
    cout<<sum;
    return 0;
}
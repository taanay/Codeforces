#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

int main() {
    int n, od=0, ev=0;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) {
        cin >> a[i];
        if(a[i] % 2==0) {
            ev++;
        }
        else{
            od++;
        }
    }
    if(od%2!=0){
        cout<< od << endl;
    }
    else{
        cout << ev << endl;
    }
    return 0;
}
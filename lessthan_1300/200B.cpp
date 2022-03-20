#include "bits/stdc++.h"
using namespace std;

int main() {
    float n, val;
    float count = 0; 
    cin >> n; 
    
    for(int i=0; i<n; i++) {
        cin >> val;
        count  = count + val;
    }
    
    cout << fixed << setprecision(12) << count/n;

    return 0;
}
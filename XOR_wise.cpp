#include"bits/stdc++.h"
using namespace std;
 
void solve(int n, int m) {
    int res ;
    res = n & m;
    cout<<(n^res) + (m^res)<<endl;
 
}
 
int main() {
    
    int t, num1, num2;
    cin >> t;
    while(t--) {
        cin >> num1 >> num2;
        solve(num1, num2);
    }
    return 0;
}
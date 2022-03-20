#include"bits/stdc++.h"
using namespace std;
 
void solve(int n){
    int a, b, c, d, i;
    // while(1) {
 
    // 
    while(1){
        n++;
        string s = to_string(n);
        a = int(s[0]-48);
        b = int(s[1]-48);
        c = int(s[2]-48);
        d = int(s[3]-48);
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout<<n;
}
 
int main() {
    int n;
    cin >> n;
    solve(n);
}
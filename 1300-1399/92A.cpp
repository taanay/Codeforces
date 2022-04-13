#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    n++;
    for(int i = 1; ; i=(i+1)%n) {
        if(i<=m){
            m -= i;
            // cout<<m<<endl;
        }
        else if(i>m){
            break;
        }
        
    }
    cout << m;
    return 0;
}
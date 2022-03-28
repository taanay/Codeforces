#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a = 0, b = 0,count = 0;
    double sq;
    cin >> n >> m;
    sq = sqrt(m);
    for(b = 0; b<=sq; b++) {
        a = m - b*b;
        if(a*a + b == n){
            count++;
        }
    }
    cout<<count;
    return 0;
}
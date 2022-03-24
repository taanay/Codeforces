#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, od, evs, evend, val, k, rn;
    cin >> n >> k;
    
    if(n%2!=0){
        // odd range {
        od = (n/2) + 1;
        evs = od + 1;
        evend = n;
    }else{
        // even range 
        od = n/2;
        evs = od + 1;
        evend = n;
    }
    if(k<=od){
        val = (1 + (k-1) *2);
    }
    else{
        rn = k - od;
        val = (2+(rn-1)*2);
    }
    cout<<val;
    return 0;
}
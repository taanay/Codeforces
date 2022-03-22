#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, out, in, l, r, u, d, x, y;
    cin>>n;
    int X[n+1], Y[n+1];
    for(int i = 0; i<n; i++) {
        cin >> X[i] >> Y[i];
    }
    int count = 0;
    for(out = 0; out<n; out++) {
        l=r=u=d=0;
        x = X[out];
        y = Y[out];
        for(in = 0; in<n; in++){
            if(X[in]==x){
                if(Y[in]<y) l++;
                if(Y[in]>y) u++;
            }
            if(Y[in]==y){
                if(X[in]>x) r++;
                if(X[in]<x) d++;
            }
        }
        if(l>0 && u>0 && r>0 && d>0){
            count++;
        }
    }
    cout<<count;
    return 0;
}
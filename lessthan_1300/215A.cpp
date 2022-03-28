#include"bits/stdc++.h"
using namespace std;
int main() {
    int n, m, k, l, count=0, mod=-1,z,t;
    cin >> n;
    int A[n+10];
    for(int i=1; i<=n; i++) {
        cin>>A[i];
    }
    cin>>m;
    int B[m+10];
    for(int i=1; i<=m; i++) {
        cin>>B[i];
    }
    for(k = 1; k<=n; k++) {
        for(l = 1; l<=m; l++){
            if((B[l] % A[k])==0){
               mod = max(mod, B[l]/A[k]);
            }
        }
    }
    for(k = 1; k<=n; k++) {
        for(l = 1; l<=m; l++){  
              if(B[l] % A[k] == 0 && B[l]/A[k] == mod){
                  
                  count++;
              }
        }
    }
    
    cout<<count;
    return 0;
}
#include "bits/stdc++.h"
using namespace std;

int solve(int i, int j) {
    int a, b;
    a = (3-i);
    b = (3-j);
    if(a<0){
        a = (-1)*a;
    }
    if(b<0){
        b = (-1)*b;
    }
    return a+b;
}

int main() {
    int val, i, j, indI, indJ;
    for(i=1; i<=5; i++) {
        for(j=1; j<=5; j++) {
            cin>>val;
            if(val==1){
                indI = i;
                indJ = j;
            }
        }
    }
   
    cout<<solve(indI,indJ);
    return 0;
}
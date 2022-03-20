#include"bits/stdc++.h"
using namespace std;

void swap( int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n; 
    cin>>n;
    if(n%2!=0){
        cout<<-1;
        return 0;
    }
    int a[n];
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
    for(int j=1; j<n; j++) {
        swap(&a[j], &a[j+1]);
        j++;
    }
    for(int k=1; k<=n; k++) {
        cout<<a[k]<<" ";
    }
    return 0;
}
// if either he breaks his best or worst pwerformance
#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, count = 0, val, min, max, j; 
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>val;
        a[i] = val;
    }
    if(n==1){
        cout<<"0";
        return 0;
    }
    
    min=a[0];
    max = a[0];
    for(j = 0; j<n; j++) {
        if(a[j+1]<min){
            count++;
            min = a[j+1];
        }
        else if(a[j+1]>max){
            count++;
            max = a[j+1];
        }
    }
    cout<<count-1;
    return 0;    
}
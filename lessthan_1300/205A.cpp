#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, count = 0, town = 1, min, j, i;
    cin >> n;
    long long a[n+1] ;
    for(i = 1; i<=n; i++) {
        cin >> a[i];
    }
    min = a[1];
    for(j = 2; j<=n; j++) {
        if(a[j]<min) {
            min = a[j];
            town = j;
            count = 0;   

            
        }
        else {
            if(a[j]==min) {
                count++;
            }
        }
    }
    if(count>0) {
        cout<<"Still Rozdil";
    }
    else{
        cout<<town;
    }
    return 0;
}
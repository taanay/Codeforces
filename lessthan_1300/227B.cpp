#include"bits/stdc++.h"
using namespace std;
// index start form 1 

void vasya(long long int a[],long long int num) {  //1 to n
    long long int  l=0, b=0;
    long long int j, m, ser;
    cin>>m;
    while(m--){
        cin>>ser;
        l += a[ser];
        b += (num-a[ser]+1);
    }
    cout<<l<<" "<<b;
}


int main() {
    long long int num, val;
    cin>>num;
    long long int a[num+1];
    for(int i=1; i<=num; i++) {
        cin >> val;
        a[val] = i;
    }
    vasya(a, num);
    return 0;
}
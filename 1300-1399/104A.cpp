#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

int main() {
    int n; 
    cin >> n;
    n=n-10;
    if(n>11){
        cout<<0<<endl;
    }
    else if(n==11){
        cout<<4<<endl;
    }
    else if(n==10) {
        cout<<15<<endl;
    }
    else if(n<10 && n>=1){
        cout<<4<<endl;
    }
    else if(n<=0){
        cout<<0<<endl;
    }
    return 0;
}
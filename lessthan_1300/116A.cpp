#include"bits/stdc++.h"
using namespace std;

int main() {
    int n ;//stops 
    int out, in, curr= 0, max=0;
    cin>>n;
    for(int i = 0; i<n; i++) {
        cin >> out >> in;
        curr = curr - out;
        curr = curr + in;
        if(max<curr){
            max = curr;
        }
    }
    cout << max;
    return 0;
}
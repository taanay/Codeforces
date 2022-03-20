#include"bits/stdc++.h"
using namespace std;

int main() {
    int n, x, y, left_0=0, left_1=0,  right_0=0, right_1=0, count=0;
    cin >> n;
    for(int i = 0; i<n; i++) {
        cin >> x >> y;
        if(x==0){
            left_0 +=1;
        }
        if(x==1){
            left_1 +=1;
        }
        if(y==0){
            right_0 +=1;
        }
        if(y==1){
            right_1 +=1;
        }
    }
    count += min(left_0, left_1);
    count += min(right_0, right_1);
    cout<<count;
    return 0;
}
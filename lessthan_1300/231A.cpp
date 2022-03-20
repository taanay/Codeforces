#include"bits/stdc++.h"
using namespace std;

int main() {
    int no_prob, i, p, v, t, count=0, sum;
    cin>>no_prob;
    for(i = 0; i<no_prob; i++) {
        cin >> p >> v >> t;
        sum = p+v+t;
        if(sum>=2){
            count++;
        }
    }
    cout<<count;
    return 0;
}
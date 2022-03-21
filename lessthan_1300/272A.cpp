#include"bits/stdc++.h"
using namespace std;
int main() {
    int frnds, tot, ch, j, frndselection = 0, k, count=0;
    cin>>frnds;
    tot = frnds + 1;
    for(int i = 1 ;i<=frnds; i++) {
        cin >> ch;
        frndselection += ch;
    }
    for(j = 1; j<=5; j++) {
        k = frndselection+j;
        if(k%tot==1){
            k = frndselection;
            continue;
        }else{
            k = frndselection;
            count++;
        }
    }
    cout<<count;
    return 0;
}
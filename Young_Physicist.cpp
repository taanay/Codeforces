#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y,z;
    int s1=0, s2=0, s3=0;
    while(n--) {
    cin>>x>>y>>z;
    s1 += x+y+z;
    }

    if(s1==0 && s2==0 && s3==0) {
        cout<<"YES";
    }else {
        cout<<"NO";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n , val, c=0, e=0, sum =0, i, k;
    cin >> n;
    for(i=1; i<=n; i++) {
        cin >> val;
        sum += val;
        if(sum%9==0){
            c = sum/5;
        }
        if(val==0){
            e++;
        }
    }
    cout<<c<<endl;
    if(e<=0) {
        cout<<"-1";
        return 0;
    }
    if(e>0 && c==0){
        cout<<"0";
        return 0;
    }
    while(c--){
        cout<<"5";
    }
    while(e--){
        cout<<"0";
    }
    return 0;
}
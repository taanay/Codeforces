#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
    int a[2*n], odd=0, eve=0;
    for(int i = 0; i<2*n;i++){
        cin>>a[i];
    }
    for(int i = 0; i<2*n; i++){
        if(a[i]%2==0){
            eve++;
        }else{
            odd++;
        }
    }
    if(eve == odd){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return ;
}

int main() {
    int t, val;
    cin >> t;
    while(t--) {
        cin >> val;
        solve(val);
    }
    return 0;
}
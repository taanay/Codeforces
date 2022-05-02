#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve(long long int n) {
    if(n==1){
        cout<<1<<" "<<0<<endl;
        return;
    }
    if(n==2){
        cout<<0<<" "<<1<<endl;
        return;
    }
    if(n%3==0) {
        cout<<(n/3)<<" " << (n/3)<<endl;
        return;
    }
    if(n%3==1){
        cout<<(n/3)+1<<" " << (n/3)<<endl;
        return;        
    }
    if(n%3==2){
        cout<<(n/3)<<" " << (n/3)+1<<endl;
        return;        
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

long long solve() {
    int n, k;
    cin >> n >> k;
    if(n==1) return k;
    if(n==k) return (ll)1;
    if(n<k){
        int a = k/n ;
        int b = k%n;
        if(b!=0) a++;
        return a;
    }
    else{
        int c = n/k;
        int d = n%k;
        if(d!=0) c++;
        k*=c;
        int a = k/n;
        int b = k%n;
        if(b!=0) a++;
        return a;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cout<<solve()<<nl;
    }
    return 0;
}
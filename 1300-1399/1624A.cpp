#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
    ll a,b,c;
    cin>>a>>b>>c;
    if((b-a)==(c-b)){cout<<"YES"<<nl;continue;}
    if((a+c)%(2*b)==0){cout<<"YES"<<nl;continue;}
    if((2*b-a)>0)
    if((2*b-a)%c==0){cout<<"YES"<<nl;continue;}
    if((2*b-c)>0)
    if((2*b-c)%a==0){cout<<"YES"<<nl;continue;}
    cout<<"NO"<<nl;
    }
    return 0;
}
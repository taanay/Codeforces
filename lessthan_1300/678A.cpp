#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, k, d;
    cin >> n >> k;
    d = ((n/k) + 1 )*k;
    cout<<d;
    return 0;
}
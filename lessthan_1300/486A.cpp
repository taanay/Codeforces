#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, sum = 0, i;
    cin >> n;
    if(n%2==0) {
        sum = n/2;
    }
    else{
        sum = (-1) * ((n/2)+1);
    }
    cout<<sum<<endl;
    return 0;
}
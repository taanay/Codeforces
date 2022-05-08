#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int solve(int a[], int n, int sum) {
    int k, count=0;
    if(sum%n != 0) {
        return -1;
    }
    k = sum/n;
    for(int i = 0; i<n; i++) {
        if(a[i]>k){
            count++;
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, sum=0;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        cout<<solve(a, n, sum)<<endl;
    }
    return 0;
}
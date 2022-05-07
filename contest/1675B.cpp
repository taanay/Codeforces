#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
 
int solve(long long int a[], int n) {
    int count = 0;

    for(int i = n-2; i>=0; i--) {
        if(a[i+1]==0){
            count=-1;
            break;
        }
        while(a[i]>=a[i+1]){
            a[i] = a[i]/2;
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
        long long int n, i;
        cin >> n;
        long long int a[n];
        for(i = 0; i<n; i++) {
            cin >> a[i];
        }
        if(n==1) {
            cout<<0<<endl;
            continue;
        }
        cout<<solve(a, n)<<endl;
    }
    return 0;
}
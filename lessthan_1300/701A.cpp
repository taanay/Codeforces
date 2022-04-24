#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
int a[110];
float sum, av;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    av = (sum/n) * 2;
    for(int i = 1; i<=n; i++) {
        if(a[i]!=0){
            for(int j = 1; j<=n; j++){
                if(a[i]+a[j]==av && i!=j){
                    cout<<i << " " << j<<endl;
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
    }
    return 0;
}
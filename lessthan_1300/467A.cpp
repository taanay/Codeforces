#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, count=0;
    cin >> n;
    while(n--) {
        int x, y;
        cin >> x >> y;
        if((y-x)>=2){
            count++;
        }
    }
    cout<< count << endl;
    return 0;
}
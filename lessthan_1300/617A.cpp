#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, step;
    cin >> n;
    if(n <= 5){
        cout<<1<<endl;
    }
    else{
        if(n%5==0){cout<<n/5<<endl;}
        else{step = (n/5) + 1;
        cout<<step<<endl;}
    }
    return 0;
}
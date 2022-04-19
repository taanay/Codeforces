#include"bits/stdc++.h"
using namespace std;

bool isSquare(int x)
{
    return(sqrt(x)==(int)sqrt(x));   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string k;
    cin >> n;
    k = isSquare(8*n+1)?"YES":"NO";
    cout<<k;
    return 0;
}
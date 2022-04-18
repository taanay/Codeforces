#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

int minMax(vector<int> v, int i, int n){
    int min , max;
    double x;
    min = *min_element(v.begin()+i, v.begin()+n);
    max = *max_element(v.begin()+i, v.begin()+n);
    x = max - min;
    return x;
}

int main() {
    int n , m, x, val = 2000000, y;
    cin >> n >> m;
    vector <int> v (m);
    for(int i = 0; i<m; i++) {
        cin >> x;
        v.push_back(x);
    }
    
    for(int i = 0;n<=m-1;i++,n++){
        y = minMax(v, i, n);
        if(y<val){
            val = y;
        }
    }
    cout<<val;
    return 0;
}
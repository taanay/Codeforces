#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x>0 && y>0){
        cout<<0<<" "<< x+y << " " << x+y << " " << 0;
        return 0;
    }
    if(x<0 && y>0) {
        cout<<x + (-1)*y << " " << 0 << " " << 0 << " " << (-1)*x + y; 
        return 0;
    }
    if(x>0 && y<0){
        cout<<0<<" " << (-1)*x + y <<" "<<x + (-1)*y<<" "<<0;
        return 0;
    }
    if(x<0 && y<0){
        cout<<x+y<<" "<<0<< " " <<0<< " " <<x+y ;
    }
    return 0;
}
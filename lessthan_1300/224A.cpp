#include<bits/stdc++.h>
using namespace std;
int main() {
    float lb, bh, hl, product, l, b, h;
    cin >> lb >> bh >> hl;
    product = lb*bh*hl;
    product = sqrt(product);
    l = product/lb;
    b = product/bh;
    h = product/hl;
    cout<<4*(l+b+h);
    return 0;
}
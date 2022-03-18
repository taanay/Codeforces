#include"bits/stdc++.h"
using namespace std;

int solve(int a, int b){

}

int main() {
    int a,b;
    map<int, string> m;
    m[0] = ".";
    m[1] = "-.";
    m[2] = "--";
    map<int, string> :: iterator it;
    for(it = m.begin(); it!=m.end(); ++it){
        cout<<it->first;
    }
    
    solve(a,b);
    return 0;
}
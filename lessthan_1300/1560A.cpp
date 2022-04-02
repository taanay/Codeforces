#include"bits/stdc++.h"
using namespace std;
long long a = 1e5 +1234;
vector <int> v;

int solve(int indx) {
    
    return v[indx-1];
}

void ele(){
    for(int i = 1; i<a; i++){
        if(i%3==0){
            continue;
        }
        else if(i%10 == 3){
            continue;
        }
        else if(i%3==0 && i%10 == 3){
            continue;
        }
        v.push_back(i);
    }
}

int main() {
    int t, indx;
    cin >> t;
    ele();
    while(t--) {
        cin >> indx;
        cout<<solve(indx)<<endl;
    }
    return 0;
}
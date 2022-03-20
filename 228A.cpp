#include"bits/stdc++.h"
using namespace std;
int main() {
    int val;
    set <int> s;
    for(int i = 0; i<4; i++) {
        cin >> val;
        s.insert(val);
    }

    // set<int> :: iterator it;
    // for(it=s.begin(); it!=s.end(); it++){
    //     cout<<(*it)<<" ";
    // }
    cout<<4-(s.size());
    return 0;
}
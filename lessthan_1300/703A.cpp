#include"bits/stdc++.h"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, c, m_count = 0, c_count = 0;
    cin >> n;
    for(int i = 1; i<=n; i++) {
        cin >> m >> c;
        if(m>c){
            m_count++;
            continue;
        }
        if(c>m){
            c_count++;
            continue;
        }
    }
    // cout<<m_count<<c_count<<endl;
    if(m_count==c_count){
        cout<<"Friendship is magic!^^"<<endl;
        return 0;
    }
    if(m_count>c_count){
        cout<<"Mishka"<<endl;
        return 0;
    }
    if(c_count>m_count) {
        cout<<"Chris"<<endl;
        return 0;
    }
    
    return 0;
}
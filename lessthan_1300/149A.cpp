#include"bits/stdc++.h"
using namespace std;

void sort(vector<int> &v) {
    int i, j, k=12, temp;
    for(i=0; i<k; i++) {
        for(j = 0; j<k-i-1; j++) {
            if(v[j]>v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, a, count = 0, k = 0, mon = 12, len, sum = 0;
    cin>>n;
    vector<int> v; 
    while(mon--){
        cin>>a;
        v.push_back(a);
    }
    if(n==0){
        cout<<'0';
        return 0;
    }
    vector<int> :: iterator it;
    for(it = v.begin(); it!=v.end(); it++) {
        sum = sum + *it;
    }
    if(sum<n) {
        cout<<"-1";
        return 0;
    }
    sort(v);
    while(k<n){
        len = v.size();
        k = k + v[len-1];
        count++;
        v.pop_back();
    }
    cout<<count;
    return 0;
}
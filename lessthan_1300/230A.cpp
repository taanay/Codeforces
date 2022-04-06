#include"bits/stdc++.h"
using namespace std;
// sorting pair of vector as 1st element 
// in increasing and 2nd in decreasing
bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}
int main() {
    vector<pair <int, int>> v;
    int lvl, n, a, b;
    cin >> lvl >> n;
    for(int i = 0; i<n; i++) {
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end(), sortbyCond);
    for(int i = 0; i<n; i++) {
        if(lvl<=v[i].first){
            cout<<"NO";
            return 0;
        }
        lvl += v[i].second;
    }
    cout<<"YES";
    return 0;
}
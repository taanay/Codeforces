// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

int solve() {
    string str;
    cin >> str;
    int day=1;
    set<int> s;
    for(int i=0; i<str.length(); i++) {
        s.insert(str[i]);
        if(s.size() > 3) {
            day++; 
            s.clear();
            s.insert(str[i]);
        }
    }
    return day;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
        cout<<solve()<<endl;
    }

    return 0;
}
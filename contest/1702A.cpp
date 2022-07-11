#include <bits/stdc++.h>
 
using namespace std;
 
long long solve() {
    long long n;
    cin >> n;
    long long c = 0, curr;
    long long ans = 1000000100000;
    while(1){
        curr = n - pow(10,c);
        if(curr<0)
            break;
        ans = min(ans, curr);
        
        c++;
    }
    return ans;
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
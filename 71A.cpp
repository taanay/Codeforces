#include <bits/stdc++.h>
using namespace std;
 
void wayTooLong() {
    string s;
    cin>>s;
    int len = s.length();
    
    if(len > 10){
        cout<<s[0];
        cout<<len-2;
        cout<<s[len-1];
        cout<<endl;
    }
    else{
        cout<<s<<endl;
    }
}
 
int main() {
    int n;
    cin>>n;
    // wayTooLong();
    while(n--){
        wayTooLong();
    }
    return 0;
}
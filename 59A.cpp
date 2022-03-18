#include"bits/stdc++.h"
using namespace std;

void solve(string s){
    int len, i, up=0, low=0, j;
    len = s.length(); 
    for(i = 0; i<len; i++){
        if(s[i]>=97 && s[j]<=122){
            low++;
        }else{
            up++;
        }
    }
    if(low>=up)
	{
		transform(s.begin(), s.end(),s.begin(), ::tolower);
	}else{
        transform(s.begin(), s.end(),s.begin(), ::toupper);
    }

    cout<<s;

}

int main() {
    string s;
    cin>>s;
    solve(s);
}

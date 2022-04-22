#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        vector<int> v;
        bool flag = false;
        int a=1, b=1;
        string s;
        cin >> s;
        for(int i = 0; s[i]!='\0';i++){
            int count =1;
            while(s[i] == s[i+1]){
                i++;
                count++;
            }
            v.push_back(count);
        }
        for(auto& it: v){
            if(it==1){
                flag = true;
                break;
            }
        }
        if(flag == true){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}
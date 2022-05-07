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
        int x1, y1, x2,y2, x3,y3;
        cin >> x1>>y1;
        cin>> x2>>y2;
        cin >> x3>>y3;
        if(x1==x2 && x2==x3){
            if((y1<y3 && y3<y2) || (y2<y3 && y3<y1)){
                return abs(y1-y2) + 2;
            }
            else{
                return abs(y1-y2);
            }
        }
        else if(y1==y2 && y2==y3) {
            if((x1<x3 && x3<x2) || (x2<x3 && x3<x1)){
                return abs(x1-x2) +2;
            }
            else{
                return abs(x1-x2);
            }
        }
        else{
            return abs(x1-x2) +abs(y1-y2);
        }
    }
    return 0;
}
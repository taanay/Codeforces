#include"bits/stdc++.h"
using namespace std;
int main() {
    int n, i, j, k, l, space;
    cin >> n;
    for(i = 0; i<=n; i++) {
        for(space=n-i; space>=1; space--){
            cout<<"  ";
        }
        for(j = 0; j<(2*i+1); j++){
            if(j <=(2*i+1)/2){
                cout<<j<<" ";
            }
            else if((2*i+1)-j-1 == 0){
                cout<<(2*i+1)-j-1;
            }
            else{
                cout<<(2*i+1)-j-1<<" ";
            }
        }
        cout<<endl;
    }
 
    for(i = n-1; i>=0; i--) {
        for(space=n-i; space>=1; space--){
            cout<<"  ";
        }
        for(j = (2*i+1)-1; j>=0; j--){
            if(j < (2*i+1)/2){
                cout<<j<<" ";
            }
            else if(j == 0){
                cout<<j;
            }
            else{
                cout<<(2*i+1)-j-1<<" "; 
            }
        }
        cout<<endl;
    }
    return 0;
}
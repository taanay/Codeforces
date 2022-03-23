#include"bits/stdc++.h"
using namespace std;
int main() {
    int page, count = 0, j=0, day;
    cin >> page;
    if(page==0) return 0;
    int a[7];
    for(int i = 0; i<7; i++){
        cin>>a[i];
    }
    j = 0;
    while(1) {
        if(page<=0){
            break;
        }else{
            page = page - a[j];
            day = j;
            j = (j+1) % 7;
        }
    }
    cout<< day+1;
    return 0 ;
}
#include<bits/stdc++.h>
using namespace std;
 
int team1(int len, int a[]){   
    int count =0;
        for(int i=0; i<len-1; i++) {
            if(count>=7){
                return count;
            }
            if(a[i]==1) {
                count+=1;
            }
            
            if(a[i]==0) {
                count = 0;
            }
        }
        return count;
    }
 
int team2(int len, int a[]){
    int count =0;
        for(int i=0; i<len-1; i++) {
            if(count>=7) {
                return count;
            }
            if(a[i]==0) {
                count+=1;
            }
            
            if(a[i]==1) {
                count = 0;
            }
        }
        return count;
    
}
 
 
int main() {
    string player;
    cin>>player;
    int k, l,len = player.length();
    int a[len];
    for(int i=0;i<len; i++) {
         a[i] = int(player[i]-48);
    }
 
    k=team1(len, a);
    l=team2(len, a);
 
    if(k+1>=7 || l+1>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
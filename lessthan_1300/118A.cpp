#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n ;
    
    int t[]={97,101,105,111,117,121,65,69,73,79,85,89};
    n=s.length();
 
    for(int i=0;i<n;i++){
        for(int j=0;j<12;j++){
            if(s[i]==t[j]){
                s[i]=0;
            }
        }
 
    }
 
    for(int i=0;i<s.length();i++){
        if(s[i]!=0 && s[i]>=65 && s[i]<=90)
        s[i]=s[i]+32;
    }
 
    for(int i=0;i<s.length();i++){
        if(s[i]!=0){
        cout<<"."<<s[i];
        }
    }
    
    return 0;
}
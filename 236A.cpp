#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int hash[128] = { 0 };
	int i, c = 0;
 
	// reading each character of str[]
	for (i = 0; i < str.length(); ++i) {
		// set the position corresponding 
		// to the ASCII value of str[i] in hash[] to 1
		hash[str[i]] = 1;
	}
 
	// counting number of unique characters
	// repeated elements are only counted once
	for (i = 0; i < 128; ++i) {
		c += hash[i];
	}
    if(c%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
	return 0;
 
}
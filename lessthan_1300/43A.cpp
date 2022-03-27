// counting the occurance of string and print the string which has max count using unordered map
#include"bits/stdc++.h"
using namespace std;
int main() {
    int n, count=0, max=0;
    string team, won;
    cin >> n;
    unordered_map <string, int> dict;
    for(int i = 0; i<n; i++) {
        cin >> team;
        if(dict.find(team) == dict.end() ) {
            dict[team] = ++count;
            count=0;
        }
        else{
            dict[team]++;
        }
        
    }
    // for(auto it = dict.begin(); it!=dict.end(); ++it){
    //     cout<<"{"<<it->first << ":" << it->second<<"}"<<endl;
    // }
    for(auto it = dict.begin(); it!=dict.end(); ++it){
        if((it->second)>max){
            max = it->second;
            won = it->first;
        }
    }
    cout<<won;
    return 0;
}
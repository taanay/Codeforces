#include<bits/stdc++.h>
using namespace std;
 
void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
int selectionSort( vector <int> v, int m) {
    int min, k, count=0;
    int lenV = v.size();
    for(int i=0; i<lenV-1;i++){
        min = i;
        for(int j=i+1; j<lenV; j++){
            if(v[j]<v[min]){
                min = j;
            }
        }
        swap(&v[min],&v[i]);
    }
    for(int k=0; k<m; k++){
        if(v[k]<=0) {
            count = count + (-1)*v[k];
            
        }
        
    }
    return count;
}
 
int main() {
    vector<int> v; 
    int n, m, val;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>val;
        v.push_back(val);
    }
 
    cout<<selectionSort(v, m);
    return 0;
}
#include<iostream>  
#include<algorithm>  
#include<cstdio>  
#include<cmath>  
#include<vector>  
#include<cstring>  
#define Min(a,b) ((a)>(b)?(b):(a))  
#define MAX 1e9+8  
#define MIN -(1e9+8)  
using namespace std;  
int main()  
{  
int n;  
while(cin>>n)  
{  
long long max=MIN,min=MAX,cmax,cmin;  
while(n--)  
{  
int temp;  
cin>>temp;  
if(temp>=max)  
if(temp>max)  
{  
max=temp;  
cmax=1;  
}  
else  
cmax++;  
if(temp<=min)  
if(temp<min)  
{  
min=temp;  
cmin=1;  
}  
else  
cmin++;  
}  
cout<<max-min<<' ';  
if(max!=min)  
cout<<cmin*cmax<<endl;  
else  
{  
long long ans=0;  
for(int i=1; i<cmax; i++)  
ans+=i;  
cout<<ans<<endl;  
}  
}  
return 0;  
}
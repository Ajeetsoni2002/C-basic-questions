#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t,s;
cout<<"enter a number"<<endl;
cin>>n;
s=n;
for(int i=0;0<n;i++){
    t=t*10;
 t=t+n%10;
    n=n/10;}
if(s==t){
    cout<<"this is a pelindrome number"<<endl;}
else
cout<<"this is not a pelindrome number"<<endl;
    return 0;
}
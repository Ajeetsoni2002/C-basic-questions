#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,s,t,total=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    s=n;
 
    for(int i=1;0<s;i++){
        t=s%10;
       
        total=total+(t*t*t);
        s=s/10;
    }
    if(total==n){
        cout<<"this is a armstorg number"<<endl;}
    
    else
        cout<<"this is not a armstong number"<<endl;
    





    return 0;
}
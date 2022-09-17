#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,prime =1;
cout<<"enter the value of n"<<endl;
cin>>n;
if(n==0 || n==1){
    prime=0;
}
for(int i=2;i<n;i++){
    if(n%i==0){
        prime =0;
        break;
    }
    // else if (n%i!=0){
    //     prime=1;
    //     break;
    // }
}
if(prime ==0){
    cout<<"this is not a prime number"<<endl;
}
if(prime ==1){
    cout<<"this is a prime number"<<endl;
}




    return 0;
}
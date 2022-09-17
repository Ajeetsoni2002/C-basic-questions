#include<iostream>
using namespace std;
int main()
{
int n,prime=1;
cout<<"enter the value of n\n";
cin>>n;

if(n==0 || n==1 ){
  cout<<"this is not a prime number\n";
}

for(int i=2;i<n;i++){
    if(n%i==0){
    cout<<"this is a not prime number\n";
    prime=0;
    break;
    }

}
 if(prime==1){
    cout<<"this is a prime number'\n";

}





    return 0;
}
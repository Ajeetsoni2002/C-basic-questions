#include<iostream>
using namespace std;
int main()
{
int total=0,n,t;
cout<<"enter the value of n"<<endl;
cin>>n;

for(int i=1;0<n;i++)
{
t=n%10;
// cout<<t;
total =total+t;
n=n/10;

}
cout<<"sum of digits="<<total<<endl;




    return 0;
}
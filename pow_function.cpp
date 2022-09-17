#include<bits/stdc++.h>
using namespace std;
int main()
{
float n,t;
cout<<"enter the value of n\n"<<endl;
cin>>n;
cout<<"[ n ]"<<" [2 the power n]"<<" [2 the power -n]"<<endl;

for(int i=0;i<=n;i++){
    t=1/pow(2,i);
    cout <<i<<"\t"<<pow(2,i)<<"\t"<<t<<endl;
}

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
long factorial=1.0;
cout<<"enter the value of n"<<endl;
cin>>n;

if(n<0)
    cout<<"error!!!";

else{
for(int i=1;i<=n;i++){
    factorial=factorial*i;
}
cout<<factorial;
}


return 0;

}
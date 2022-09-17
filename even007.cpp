
#include<bits/stdc++.h>
using namespace std;
int main()
{

int n,total=0;
cout<<"enter the value of n"<<endl;
cin>>n;

for(int i=1;i<=2*n;i++){
if(i%2==0){
    // cout<<i<<"\t";
    total =total+i;
}
}
cout<<total<<endl;

return 0;
}
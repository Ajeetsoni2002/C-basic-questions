#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,t1=0,t2=1,nextturn=0;
cout<<"enter term of fibonacci series"<<endl;
cin>>n;
cout<<"the fibonacci series is ";
for(int i=1;i<=n;i++){
    if(i==1){
        cout<<t1<<",";
        continue;
    }
    if(i==2){
        cout<<t2<<",";
        continue;
    }
    nextturn=t1+t2;
    t1=t2;
    t2=nextturn;

    cout<<nextturn<<",";
}

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int array[n];

cout<<"enter the elements of array"<<endl;
for(int i=0;i<n;i++)
{
cin>>array[i];
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(array[j]>array[i]){
        int temp=array[j];
        array[j]=array[i];
        array[i]=temp;
        }
    }
}
cout<<"array in decending order"<<endl;
for(int i=0;i<n;i++){
    cout<<array[i]<<"\t";
}




    return 0;
}
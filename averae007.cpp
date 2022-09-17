#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,counter;
    float avg, sum=0;
    int arr[100];

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    avg = sum/n;
    cout<<"The avg is : "<<avg;





    return 0;
}
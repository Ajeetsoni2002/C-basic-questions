#include<iostream>
#include<time.h>
using namespace std;
int main ()
{
int  number,lower=10,upper=50;

    srand(time(0));
    for(int i=1;i<100;i++){
 number=rand()%(upper-lower)+lower;
    cout<<number  <<"\t";}
    


    return 0;
}
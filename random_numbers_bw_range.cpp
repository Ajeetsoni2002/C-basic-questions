#include<iostream>
#include<time.h>
// #include<stdlib.h>
using namespace std;

float rand_float()
{                                                                
    return ((float)rand())/RAND_MAX;         //this is for random numbers between 1-10
}

float rand_float_interval(float a, float b){
    return rand_float()*(b-a)+a;
}

int main()
    {
        
        

        srand(time(0));

        for(int i=0;i<20;i++){
            // cout<<rand_float()<<"\t";  //for random numnbers between [0,5]  then rand_float()* (5-0)diffrence of  interval

cout<<rand_float_interval(50,60)<<"\t";

        }





        return 0;
    }
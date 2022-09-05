#include<iostream> 
#include <math.h>

using namespace std;

    int main()

    {
    int seconds;
    int minutes; 
    int hours;
    int days;

    cout<<"Enter number of time: ";
    cin>>seconds;

    seconds;
    minutes=seconds/60;
    hours= seconds/3600 ;
    days= seconds/86400 ;
    

    cout<<"The time is: " <<"\n"<< seconds << " seconds " <<"\n"<< minutes <<" minutes "<< "\n" << hours << " hours " << "\n" <<days << " days" <<endl ;
    return 0;

        return 0;
    }
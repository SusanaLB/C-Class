#include<iostream> 
#include <math.h>

using namespace std;

    int main()

    {
     int n= 123456789;
     int m=0; 
    
     while(n !=0)
     {
         m = ( 10 * m) + (n % 10) ;
         n = n/10 ;
     }

    

        return 0;
    }
#include <iostream>

using namespace std;


int main () 
 {
     int year;
     cout <<" Enter Year: " ; 
     cin >> year ; 
          
    if( ( (year%4 == 0) && (year%100!=0) ) //Check Year if is divisble by 4,100, or by 400
            || (year%400==0) ) 
    {
        cout << year << " is a leap year. \n" ;
    }
    else
    {
        cout << year << " is not a leap year. \n " ;
    }

     return 0;     
}
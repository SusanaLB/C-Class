#include<iostream> 
#include <math.h>

using namespace std;


int main() 

{   
     
        int Year ;
        int NewYear;
        int Month ;
        int NewMonth;
        int Date;
        int Day; 
        int X ; 


        cout << "Please Enter a Year of Four Digits: ";
        cin >> Year;
        cout << "Please Enter a Month 1 For January, 12 for December: ";
        cin >> Month;
        cout << "Please Enter a Date 1 to 31: ";
        cin >> Date;

    
                           
        NewYear=Year-(14-Month)/12 ;
        X = NewYear + NewYear/ 4 - NewYear / 100 +NewYear/400 ; 
        NewMonth = Month + 12*((14-Month)/12)-2 ;
        Day = (Date + X + (31*NewMonth)/12)%7 ; 


        
        cout<< "The Day of the Week is: "<< Day << "\n"; 
    

     
    return 0;
}
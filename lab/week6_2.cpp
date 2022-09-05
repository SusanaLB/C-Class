#include<iostream> 
#include <math.h>

using namespace std;


int main() 

{   
     
        int dimesvalue = 10;
        int quartersvalue = 25;
        int nickelsvalue = 5 ;
        int Total;
        int dimes;
        int nickels;
        int quarters;
    

        cout << "Please Enter the Number of nickels: ";
        cin >> nickels;

        cout << "Please Enter the Number of dimes: ";
        cin >> dimes ;
        cout << "Please Enter the Number of quaters: ";
        cin >> quarters ;
                   
        Total = (dimes)*(dimesvalue) + (quarters)*(quartersvalue) + (nickels)*(nickelsvalue); 

        
        cout<<"There are " << Total ;
        cout<<" cents in total\n" ;

     
    return 0;
}
 
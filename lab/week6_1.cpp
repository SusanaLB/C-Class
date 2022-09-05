#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 

{   
     
        double miles ;
        double kilometers ;
        double converting = 1.609 ;
    

        cout << "Please Enter the Number of Miles: ";
        cin >> miles ;
        
                   
        kilometers = miles*(converting) ; 

        cout << "You Entered: " << miles ; 
        cout << "\nThis Value in Kilometers is: " << kilometers << endl;

     
    return 0;
}
 
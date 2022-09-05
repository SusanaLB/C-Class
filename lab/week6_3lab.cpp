#include<iostream> 
#include <math.h>

using namespace std;


int main() 

{   
     
        double X ;
        double Y ;
        double Vector;


        cout << "Please Enter Two Numbers for X and Y: ";
        cin >> X >> Y;

    
                           
        Vector = sqrt(pow(X,2) + pow(Y,2)); 

        
        cout<< "The Distance of the Points ("<< X <<"," << Y <<") to the Origin Point is "<< Vector << "\n"; 
    

     
    return 0;
}
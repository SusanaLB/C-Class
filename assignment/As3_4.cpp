#include<iostream> 
#include <math.h>

using namespace std;


int main() 

{   
     
        double x;
        double v ;
        double t;
        double g= 9.80665;
        double anw;

        cout << "Please Ente Numbers for X, V, T: ";
        cin >> x >> v >> t;

        anw=(x + v*t - g*pow(t,2))/2 ;

        
        cout<< "You Result is" << anw << "\n"<< endl;
    

     
    return 0;
}
 
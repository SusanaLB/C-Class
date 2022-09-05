#include<iostream> 
#include <math.h>

using namespace std;

    int main()

    {
        double Temperature ;
        double Speed ;
        double WindC;

        cout << "Please Enter the Temperature: " ;
        cin >> Temperature ;
        cout << "Please Enter the Wind Speed: " ;
        cin >> Speed;
        
    
        WindC = 35.74 + .6215*(Temperature) + (0.4275*(Temperature)-35.75)*pow(Speed,0.16) ;

        cout << "The Effective Temperature is: " << WindC << endl;

        return 0;
    }
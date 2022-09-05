#include<iostream> 
#include <math.h>

using namespace std;

    int main()

    {
        int height ;
        int radius ;
        int Volume;

        cout << "enter height: " ;
        cin >> height ;
        cout << "enter radius: " ;
        cin >> radius ;
        
    
        Volume = M_PI*radius*radius*height ;

        cout << "The volume is: " << Volume << endl;

        return 0;
    }
#include<iostream> 
#include <math.h>

using namespace std;

    int main()

    {
    int Digit;
    int LeftO; 
    int Reverse = 0;

    cout<<"Enter the two Digit Number: ";
    cin>>Digit;

        LeftO = Digit%10;
        Reverse = (LeftO*10) + Digit/10;
    

    cout<<"Reverse = "<<Reverse;
    cout<<endl;
    return 0;

        return 0;
    }
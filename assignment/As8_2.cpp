#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int x,result;
    //asking user to enter x value
    cout << "Enter a value for x: ";
    cin >> x;
    //evaluating the given polynomial
    result = 3*pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - 1*pow(x,2) + 7*x - 6;
    //printing the result
    cout << "The value of the polynomial is " << result;
    return 0;
}

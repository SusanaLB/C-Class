#include<iostream> 
#include<string>


using namespace std;


int main() 

{   

int a,b;  // Making space for two numbers


cout << "Please Enter Your First Number: "; // asking user for M or F input
cin >> a ; //gathering input
cout << "Please Enter Your Second Number: " ; 
cin >> b ; //gathering second input


if ( a < b) // loop checks if b is greater
        {
        cout << a << " is less than " << b ; ; // displaying result
        }
else if (a > b) // loop check
        {
        cout << a << " is greater than " << b  ; // displaying result
        }
else if ( b > a ) // loop check
        {
        cout <<  b << " is greater than " << a ; // displaying result
        }
else if (b < a ) // loop check
        {
        cout << b << " is less than " << a ; // displaying result
        }
else  if (a == b) // loop check
        {
        cout << a << " is equal to " << b ; // displaying result
        }

 return 0;  // finishing the program
}
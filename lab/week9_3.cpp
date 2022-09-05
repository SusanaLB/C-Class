#include<iostream> 
#include<string>


using namespace std;


int main() 

{   

int a ;
int b;
int c; // making space for character


cout << "Please enter three numbers: "; // asking user 1 for input
cin>>a;
cin>> b;
cin>> c; //gathering input



if (a <= b && a <= c) // first condition for loop
        {
        cout << "The smallest is " << a  ;//output
        }
else if (b <= a && b <= c)
        {
        cout << "The smallest is " << b ;//output
        }
else if (c <= b && c <= a)
        {
        cout << "The smallest is " << c ;//output   
        }
  
 return 0;  // finishing the program
}
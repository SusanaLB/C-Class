#include<iostream> 
#include<string>


using namespace std;


int main() 

{   

int a ; // making spaces for number of inputs
int b;
int c; 
int d;
int e;
int f;
int g;
int h;
int i;
int j;


cout << "Please enter ten numbers:\n"; // asking user for inputs
cin>>a;
cin>> b;
cin>> c; //gathering input
cin>> d;
cin>> e;
cin>> f;
cin>> g;
cin>> h;
cin>> i;
cin>> j;




if (a <= b && a <= c && a <= d && a <= e && a <= f && a <= g && a <= h && a <= i && a <=j) // first condition for loop
        {
        cout << "The smallest is " << a  ;//output
        }
else if (b <= a && b <= c && b <= d && b <= e && b <= f && b <= g && b <= h && b <= i && b <=j) // next condition for loop
        {
        cout << "The smallest is " << b ;//output
        }
else if (c <= b && c <= a && c <= d && c <= e &&  c <= f && c <= g && c <= h && c <= i && c <=j) // next conditon for loop
        {
        cout << "The smallest is " << c ;//output  
        }
else if (d <= b && d <= c && d <= a && d <= e && d <= f && d <= g && d <= h && d <= i && d <=j) // conditontion for loop
        {
        cout << "The smallest is " << d ;//output  
        }
else if (e <= b && e <= c && e <= d && e <= a && e <= f && e <= g && e <= h && e <= i && e <=j)
        {
        cout << "The smallest is " << e ;//output  
        }
else if (f <= b && f <= c && f <= d && f <= e && f <= a && f <= g && f <= h && f <= i && f <=j)
        {
        cout << "The smallest is " << f ;//output  
        }
else if (g <= b && g <= c && g <= d && g <= e && g <= f && g <= a && g <= h && g <= i && g <=j) // condition for loop
        {
        cout << "The smallest is " << g  ;//output
        }
else if (h <= b && h <= c && h <= d && h <= e && h <= f && h <= g && h <= a && h <= i && h <=j) // condition for loop
        {
        cout << "The smallest is " << h  ;//output
        }
else if (i <= b && i <= c && i <= d && i <= e && i <= f && i <= g && i <= h && i <= a && i <=j) // condition for loop
        {
        cout << "The smallest is " << i  ;//output
        }
else if (j <= b && j <= c && j <= d && j <= e && j <= f && j <= g && j <= h && j <= i && j <=a) // last condition for loop
        {
        cout << "The smallest is " << j  ;//output
        }
 return 0;  // finishing the program
}
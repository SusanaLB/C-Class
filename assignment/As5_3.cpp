#include<iostream>

using namespace std;

int main()

{

double n=0;// declare variables with double since decimal point is needed
double pi;

for(int I=1;I<=99;I++) // first outter loop, seeting boolean conditions and increment

{  

if(I%2==0) // inner loop condition for subtration in series

n=n-1.0/(double)(2*I-1);

else // inner loop second conditon for additions in series

n=n+1.0/(double)(2*I-1);

} // closing loops

pi=4*n; // setting equation

cout<< "The value of PI is: "<<pi << "\n"<< endl ; // result

return 0;

}
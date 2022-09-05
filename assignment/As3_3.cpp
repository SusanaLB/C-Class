#include<iostream> 
#include <math.h>

using namespace std;


int main() 

{   
    double before;
    double tip;
    double after;
    int split;

    cout << "Bill Before Tip : ";
    cin >> before;
    cout << "Percentage : " ;
    cin >> tip; 
    cout << "Number of People : " ;
    cin >> split ;

    after = before*(100 + tip) *.01/split ;

    cout << "The amount of each person is : $" << after << endl;

     
       
    

     
    return 0;
}
 
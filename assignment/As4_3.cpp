#include<iostream> 


using namespace std;


int main() 

{   
    double Income; //making space for a income
    double Tax ;

    cout << "Please Enter Income: $" ; //asking user to input the income
    cin >> Income ; 


        if ( Income < 750 ) // checking the first condition
        {
        Tax = Income * 0.001 ;
         cout << "The tax due is: $" << Tax <<endl ; //reporting result to user
        }
        else if ( Income >= 750 && Income < 2250) //checking second conditon from 10 to 99
        {
        Tax =7.5 + (.002 * Income) ;
         cout << "The tax due is: $" << Tax <<endl ; //reporting result to use
        }
        else if (Income >=2250 && Income < 3750) // checking condition
        {
        Tax =37.5  + (.003 * Income) ;
         cout << "The tax due is: $" << Tax <<endl ; //reporting result to use
        }
        else if (Income >= 3750 && Income < 5250 ) // checking condition
        {
        Tax =82.5 + (.004 * Income) ;
         cout << "The tax due is: $" << Tax <<endl ; //reporting result to use 
        }
        else if (Income >= 5250) //last loop
        {
        Tax =142.5  + (.005 * Income) ;
         cout << "The tax due is: $" << Tax <<endl ; //reporting result to use
        }   
 return 0;  // finishing the program
}
 
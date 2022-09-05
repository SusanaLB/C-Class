#include<iostream> 


using namespace std;


int main() 

{   
    int value; //making space for a value


    cout << "Please Enter Value \n" ; //asking user to input the value
    cin >> value ; //getting the value


        if ( value < 9) // checking the first condition
        {
         cout << "The value has one digit" <<endl ; //reporting result to user
        }
        if ( value >= 10 && value < 99) //checking second conditon from 10 to 99
        {
         cout <<"The value has two digits" <<endl ;  //report result to user if number is between 10 to 99
        }
        if (value >=100 && value < 999) 
        {
         cout <<"The value has three digits" <<endl ; //answear
        }
        if (value >= 1000 && value < 9999) //last loop
        {
         cout <<"The value has four digits" <<endl ; //last check
        }
             
 return 0;  // finishing the program
}
 
#include<iostream> 


using namespace std;


int main() 

{   
    int angleA; //making space for the first angle
    int angleB; //making space for the second anlge
    int angleC; //making space for the third angle
    int totalangle ; //making an extra space for the result of all three angles

    cout << "Please Enter Value for All Three Angles \n" ; //asking user to input the angles of a triagle
    cin >> angleA >> angleB >> angleC ; //getting the angles

    totalangle = angleA + angleB + angleC ; //adding all angles

        if ( totalangle == 180) //setting the first condintion of a loop to see if the addition of all three angles equal 180 degrees
        {
         cout << "Is a triangle" <<endl ; // letting the user know if is a triangle
        }
        if (totalangle > 180) // if the answer is greater than 180 degree is not a triangle
        {
         cout <<"Is not triangle" <<endl ;  // letting the user know is not a triangle
        }
        if (totalangle < 180) // checking the las condition if the addition is less than 180 degree is not a triangle
        {
         cout <<"Is not triangle" <<endl ; // letting the user know is not a triangle
        }
             
 return 0;  // finishing the program
}
 
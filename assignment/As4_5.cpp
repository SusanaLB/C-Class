#include<iostream> 
#include<string>


using namespace std;


int main() 

{   

string A,B,C,D,F; // Making a string for all the vowels
char letter; // making a character for the vowels


cout << "Please Enter a Letter Grade: "; // asking user for input
cin>>letter; //gathering input


if (letter=='A') // loop checks if the letter is a vowel
        {
        cout << "Excellent\n" ; // displaying result
        }
else if (letter== 'B') // loop checks if the letter is a vowel
        {
        cout << "Good\n" ; // displaying result
        }
else if (letter == 'C') // loop checks if the letter is a vowel
        {
        cout <<"Average\n" ; // displaying result
        }
else if (letter== 'D') // loop checks if the letter is a vowel
        {
        cout << "Poor\n" ; // displaying result
        }
else if (letter== 'F') // loop checks if the letter is a vowel
        {
        cout << "Failing\n" ; // displaying result
        }
else 
        {
        cout << "Your input is not a letter grade\n" << endl ; // last option being displayed.
        }
 return 0;  // finishing the program
}
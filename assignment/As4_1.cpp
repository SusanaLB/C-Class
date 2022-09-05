#include<iostream> 
#include<string>


using namespace std;


int main() 

{   

string a, e, i, o, u; // Making a string for all the vowels
char vowel; // making a character for the vowels


cout << "Please Enter a Lower Case Letter: "; // asking user for input
cin>>vowel; //gathering input


if (vowel=='a') // loop checks if the letter is a vowel
        {
        cout << vowel << " is a vowel\n" ; // displaying result
        }
else if (vowel== 'e') // loop checks if the letter is a vowel
        {
        cout << vowel << " is a vowel\n" ; // displaying result
        }
else if (vowel== 'i') // loop checks if the letter is a vowel
        {
        cout << vowel << " is a vowel\n" ; // displaying result
        }
else if (vowel== 'o') // loop checks if the letter is a vowel
        {
        cout << vowel << " is a vowel\n" ; // displaying result
        }
else if (vowel== 'u') // loop checks if the letter is a vowel
        {
        cout << vowel << " is a vowel\n" ; // displaying result
        }
else 
        {
        cout << vowel << " is not a vowel" << endl ; // last option being displayed.
        }
 return 0;  // finishing the program
}
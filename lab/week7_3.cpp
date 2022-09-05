#include<iostream> 
#include<string>


using namespace std;


int main() 

{   

string F; // Making a string for names M and F
string M; 
char gender; // making a character for gender
double BMR ; // Making a variable for BMR
double weight; // variable for weight
double height ; //variable for heihgt
double years; // variable for age
int bars ; // varible for chocolate bars

cout << "Please Enter Gender M for male or F for female "; // asking user for M or F input
cin>>gender; //gathering input


if (gender=='M') // loop to decide whether is M or F
        {
        cout << "Please enter weight, then height (in inches), lastly enter age\n" ; //use input
        cin >> weight >> height >> years ;
        BMR=66+(6.3*weight)+(12.9*height)-(6.8*years) ; //equation for male
        bars = BMR/230; 
        cout <<"You're a male and you BMR is " << BMR << " you can eat " << bars << " bars of chocolate maintain." << endl ; 
        //output
        }
else if (gender== 'F') //if input is F
        {
        
        cout << "Please enter weight, then height (in inches), lastly  enter age \n" ;
        cin >> weight >> height >> years ;
        BMR=655+(4.3*weight)+(4.7*height)-(4.7*years)  ; //equation if female
        bars = BMR/230 ;
        cout <<"You're a female and you BMR is " << BMR << " you can eat " << bars << " bars of chocolate to maintain." << endl ;
        //output
        }
   
 return 0;  // finishing the program
}
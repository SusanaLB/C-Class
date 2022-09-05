#include<iostream> 
#include <math.h>

using namespace std;

    int main()

    {
        double hours ;
        double grosspay ;
        double social = .06;
        double federal = .14; 
        double state =.05;
        double uniondues = 10 ; 
        double net; 
        double socialtax ;
        double federaltax ;
        double statetax;
        double uniontakeout;


        cout << "How many hours? " ;
        cin >> hours ;
        
            if  (hours > 40) 
            {
                grosspay = hours*16.78 + (hours*16.78)/2 ;
            } 

            else if (hours < 40)
            {
                             
                grosspay = hours*16.78 ;
            
            } 
            
            else if (hours == 40)
            {
                grosspay = hours*16.78 ; 
            }
        socialtax = social*grosspay ;
        federaltax = federal*grosspay ;
        statetax= state*grosspay ;
        uniontakeout= grosspay-uniondues ;


        net = (socialtax+federaltax+ statetax +uniontakeout)-grosspay ;
            
            
               

    
        

        
        cout << "Gross Pay: $" << grosspay << endl;
        cout << "Social Security Tax: $" << socialtax << endl;
        cout << "Federal Income Tax: $" << federaltax << endl;
        cout << "State Income Tax: $" << statetax << endl;
        cout << "Union Dues: $" << uniontakeout << endl;
        cout << "Net Income: $" << net <<endl; 

        return 0;
    }
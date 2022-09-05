#include<iostream> 
#include <math.h>

using namespace std;


int main() 

{   
     
        int Jackson;
        int Halmington;
        int Lincoln ;
        int Washington; 
        int Total;
        
          

        cout << "Please Enter Your Total Amount of Money: ";
        cin >> Total;
                   
        Jackson = Total/20;
        Halmington = (Total%20)/10 ;
        Lincoln = ((Total%20)%10)/5 ;
        Washington = (((Total%20)%10)%5)/1 ;
        
        cout<<"Number of $20: " << Jackson ;
        cout<<"\nNumber of $10: " << Halmington;
        cout<<"\nNumber of $5: "  << Lincoln;
        cout<<"\nNumber of $1: " << Washington << endl; 

     
    return 0;
}
 
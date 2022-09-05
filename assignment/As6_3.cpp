#include <iostream>  
using namespace std;  

int main()  
{
   
// declare variables    
int n,sum=0,m,i;  
// for loop that runs 1000 to 9999
 for(i = 1000; i<=9999; i++)
  {
      // declare variables
    n = i;
    sum = 0;
    // if statement to check number is odd or not
    if(n % 2 != 0)
      {
        // while loop to sum the digite
        while(n>0)    
         {    
            m=n%10;    
            sum=sum+m;    
            n=n/10;    
            }
            // if statement to check the sum of digit is 27 or not
            if(sum == 27)
            {
                // print the result
            cout<<"address where the riddler plans to strike = "<<i<<endl;  
            }
       
       }
    }
    
return 0;  
}  
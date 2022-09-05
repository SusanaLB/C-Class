#include<iostream>

using namespace std;

int main()
{

    int num;
    int cond = num;
    
    

        cout<<"Enter number: ";

         cin>>num;

    

    while(cond!=1)
    {

        if(cond%2==0)

            cond = cond/2;

        else

            cond = 3*cond + 1;
        
            
    cout << cond << endl; 
    }

 

    return 0;

}


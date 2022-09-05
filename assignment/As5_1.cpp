
#include <iostream>

using namespace std;


int main()
{
        int newnum = 0; //Declare variables
        int values;

        cout << "Enter numbers, end by 0: " << endl; //ask user for input
        cin >> values; //gather input

        while (values != 0) //first loop with condition of not zero
        {
                
                if (values % 2 == 0)
                
                    newnum += values; //pre-increasment and new input
                    cin >> values; //new value
                
        }

                cout << "The sum of the even numbers: " << newnum << endl; // result
        return 0;
}


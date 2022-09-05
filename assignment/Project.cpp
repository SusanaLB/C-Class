#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{

    char id; // Declaration of variables
    int itemnumber;
    double total1;
    double total2;
    double total3;
    double finalprice;

    while (1) // first outter loop
    {
        cout << " *****Welcom To ECU Cafe***** \n##### Menu ##### " << endl; // Welcoming user
        cout << "1. CheeseBurger  $5.99 " << endl;
        cout << "2. Espresso      $3.99 " << endl;
        cout << "3. Cheese Stick $4.99" << endl;

        while (1) // second continous outer loop

        {

            cout << "Enter the id number of the item: (Press C for Checkout)" << endl; //asking for input
            cin >> id;                                                                 // getting user input

            switch (id) // last inner loop
            case '1':   // first case
            {
                cout << " Enter the number of items: " << endl; //asking for input if selected
                cin >> itemnumber;                              // getting input
                total1 = 5.99 * itemnumber;
                break; // break in case it has been selected

            case '2': // second case

                cout << " Enter the number of items:" << endl;
                cin >> itemnumber;
                total2 = 3.99 * itemnumber;
                break;

            case '3': // last case

                cout << " Enter the number of items: " << endl;
                cin >> itemnumber;
                total3 = 4.99 * itemnumber;
                break;

            case 'C': // option to get out of the program

                finalprice = total1 + total2 + total3;                         // add total
                cout << "The total amount for you is: " << finalprice << endl; // printing total

                break;
            }
                if (id == 'C') // close loop if C is selected
                {

                    cout << "Thank you!\n"
                         << endl; // printing statement
                    break;        //get out of loop
                }
        }
    }

    return 0; // finishing the program
}

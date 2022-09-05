#include <iostream>
using namespace std;

int main()
{
    int i=1, number;
    int count=0; //count is to count the input values which are greater than 60
    while(i<=10)
    {
        cout<<"Enter a number :";
        cin>>number;
        if(number > 60)
            count++; // increment the count
        i++; // increment the i value
    }
    cout<<"There are "<<count<<" numbers greater than 60";
return 0;
}
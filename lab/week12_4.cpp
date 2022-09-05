#include <iostream>

using namespace std;

int main()
{
    //create array of 20 elements
    float a[20];
    //put 1 in 1st index
    a[0]=1;
    //this loop will put remaining value inf array
    for(int i=1;i<20;i++){
        //find next element and put in array
        a[i]=a[i-1]+1/(i+1.0);
    }
    //print array elements
    for(int i=0;i<20;i++)
        cout<<a[i]<<" ";

    return 0;
}
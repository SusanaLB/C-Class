#include <iostream>

using namespace std;

/**
 * @brief reverses the elements of array
 * @param Array input array that needs to be reversed
 * @param size size of the array
 */
void reverseArray(int Array[], int size){
    //tranversing upto half of the size so that each element from the from can be swapped with corresponding element from back
    for (size_t i = 0; i < size/2; i++)
    {
        //swapping the ith element from start and ith element from end of the array
        int temp = Array[i];
        Array[i] = Array[size - i - 1];
        Array[size - 1 - i] = temp;
    }
    
}

//main program to test the reverse function
int main(int argc, char const *argv[])
{
    //creating an array and taking inputs
    int A[10];

    cin >> A[0];
    cin >> A[1];
    cin >> A[2];
    cin >> A[3];
    cin >> A[4];
    cin >> A[5];
    cin >> A[6];
    cin >> A[7];
    cin >> A[8];
    cin >> A[9];
    

    //creating size variable to hold the size of array
    int size = 10;
    //calling the reverseArray function
    reverseArray(A,size);
    //printing the result
    cout<<"The Reversed Elements are: "<<endl;
    for (size_t i = 0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}
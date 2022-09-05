#include<iostream>
using namespace std;
int main()
{
    //Create an integer array of size 100
    int arr[100];
    //n variable will store the number of elements in that array,assign 8 to n
    int n=8;
    //Ask user to enter 8 numbers 
    cout<<"Enter 8 numbers for the array: "<<"\n";
    //Start a for loop,which iterates 8 number of times to store user input in arr array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Now,print the elements of that array
    cout<<"Now the elements in the array: "<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    //Now,shift each element of that array to it's next indexed cell,do this process from end to start of that array
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    //Now,store 18 in 0th indexed cell of that array
    arr[0]=18;
    //Increment n by 1
    n++;
    //Now,again print the elements of that array
    cout<<"\nAfter inserting 18 as the first element: "<<"\n";
    for(int i=0;i<n;i++){
       cout<<arr[i]<<"  ";
    }
    //Now,use bubble sort technique to sort that array in descending order
    //Start a for loop,which iterates n number of times
    for(int i=0;i<n;i++){
        //Inside that for loop,start another for loop which iterates (n-1-i) number of times
        for(int j=0;j<n-1-i;j++){
            //If any element is less than it's next element then swap those two elements
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //After sorting again print the elements of that array
    cout<<"\nAfter sorting the array in descending order: "<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
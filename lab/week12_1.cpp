#include<iostream> 


using namespace std;


void swapContents(int* item1, int* item2)

{
int tempVar = *item1;
*item1 = *item2;
*item2 = tempVar;
}


void reverseArr(int arr[], int n)
{
// pointer 1 
int *pointer1 = arr,
  
// pointer 2 
*pointer2 = arr + n - 1;
// switch the items till is less than pointer2
while (pointer1 < pointer2)
{
swapContents(pointer1, pointer2);
pointer1++;
pointer2--;
}
}

//Displaying the reversed array
void display(int arr[],int n)
{
int *i= arr;
for(i=arr;i<arr+n;i++)
cout<<*i<<" ";
cout<<endl;
  
}

// Driver function

int main()
{
int n;
cin>>n; // size of array
int array[n+1];
for(int i=0;i<n;i++) 
cin >>array[i]; // input the elements 
reverseArr(array,n); // Array elements of array reversed
display(array,n); // displayed reversed elements
return 0;
}
#include<iostream>
using namespace std;
int main()
{
int n; // n is the size of array;
cout<<"Enter the size of the array:";
cin>>n;
int a[n];
cout<<"\nenter the elements in array\n";
for(int i=0;i<n;i++) // loop will iterates 0 to n-1 times.
{
cin>>a[i];
}
// print the elements in the given array
cout<<"In the array\n";
for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
//finding non-repeating number from given array
for(int i=0; i<n;i++) //loop will iterates 0 to n-1 times.
{
int count=0; //initially declare count is zero
for(int j=0;j<n;j++) //loop will iterates 0 to n-1 times.
{
if(a[i]==a[j])
{
count++; // if the element appear increment the count value
}
}
if(count==1) // if the count is increase only one time than the number is appears in the given array is only one time. Otherwise neglect the numbers
{
cout<<"The single number is:";cout<<a[i];
}
}
}
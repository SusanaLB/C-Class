#include<iostream>

using namespace std;

int main()
{
  
  int arr[10];
  //read data
  for(int i=0;i<10;i++){
        cout<<"Enter grade "<<i+1<<" :";
        cin>>arr[i];
  }
  //declare variable
  int min=arr[0];
  int max=arr[0];
  int sum=0;
  //find sum and min and max
  for(int i=0;i<10;i++){
        if(min>arr[i])
           min=arr[i];
        else
           max=arr[i];   
    sum+=arr[i];
  }
  //prompt the user for output
  cout<<"The highest grade is "<<max<<endl;
  cout<<"The lowest grade is "<<min<<endl;
  cout<<"The mean grade is "<<(sum/10)<<endl;
  
  return 0;
}
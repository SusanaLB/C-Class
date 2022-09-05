#include <iostream>
using namespace std;
int main()
{
    int arr[100];//array of size 100
    int count=0,max=0,check,temp;//variable declared
    cout<<"enter some number,ended with -1"; 
    for(int i=0;i<100;i++) //looping 
    {   
    cin>>arr[i];
    if(arr[i]==-1) //if -1 break out of loop
    break;
    count=count+1;
    }
   cout<<"the current elements are:";
   for(int i=0;i<count;i++) //to print current elements
   cout<<arr[i]<<"  ";
   cout<<"\nthe largest among the given array is";
   for (int i = 1; i < count; i++){
        if (arr[i] > max)
            max = arr[i];//largest number in array
   }
   cout<<max;
   cout<<"\ndo you want to add elements to the array then press 1";cin>>check;
   if(check==1)
   {
        cout<<"\nenter some number,ended with -1";
           for(int i=count;i<100;i++){
                cin>>arr[i];
                if(arr[i]==-1){
                break;
         }
                count=count+1;          
   }
         for(int i=0;i<count;i++)
          cout<<arr[i]<<"  "; 
        }
         for(int i=0;i<count;i++)
        {               
                for(int j=i+1;j<count;j++) //for sorting the array in ascending.
                {
                        if(arr[i]>arr[j])
                        {
                                temp  =arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
        cout<<" the sorted array is : ";
        for(int i=0;i<count;i++)
        {
                cout<<arr[i]<<"  "; //print the sorted array
        }       
}
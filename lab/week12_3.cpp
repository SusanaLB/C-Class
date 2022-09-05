#include <iostream>

using namespace std;

int main()
{ int a[10],count=0,i,count1=0;        //declaration
    float sum=0,mean;
    for (i=1;i<=10;i++){               //1st for loop
        cout<<"enter the "<<i<<" values"<<endl;
        cin>>a[i];
        sum=sum+a[i];
    }
    mean=sum/10;
    for (i=1;i<=10;i++){            // 2nd for loop begins
        if(a[i]>=mean){             //if statement
            count=count+1;
        }
        else{                       //else statement
            count1=count1+1;
        }
    }
    cout << "The mean is " << mean<<endl;          //display statement
    cout<<count<<" elements are less than "<<mean<<endl;
    cout<<count1<<" elements are greater than "<<mean<<endl;

    return 0;
}
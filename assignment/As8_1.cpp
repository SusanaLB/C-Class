#include <iostream>

using namespace std;

//compute gpa function which accepts grades and size value
double compute_GPA(char grades[],int size) {
  
//declare sum value 0
double sum=0;
  
//iterate from 0 to size
for (int i=0;i<size;i++) {
  
//based on grades add number to sum value
if (grades[i]=='A')
  
sum = sum + 4;

else if (grades[i]=='B')
  
sum = sum + 3;
  
else if (grades[i]=='C')
  
sum = sum + 2;
  
else if (grades[i]=='D')
  
sum = sum + 1;
}
  
//finally return the average value (sum/size)
return sum/size;
  
}

//main function
int main() {

   //studentA array and calling compute_GPA() function and printing result
char studentA[] = {'A','A','B','A','D','C','A','A'};

cout << compute_GPA(studentA,8) << endl;

   //studentB array and calling compute_GPA() function and printing result
char studentB[] = {'B','B','D','F','A','A','B','A','A','D','A','B'};

cout << compute_GPA(studentB,12) << endl;
  
return 0;

}
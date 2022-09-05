#include <iostream>


using namespace std;

int main() 

{
  int a;
  int b;

 while (a > 0 && b > 0)

 {

  cout << "Enter two integers: \n";
  cin >> a; 
  cin >> b;
  
  while(a != b) {
    if(a > b)
      a -= b;
    else
      b -= a;
  }

  cout << "GCF: " << a << "\n" << endl;
  
  }
  
  return 0;
}


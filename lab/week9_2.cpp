#include <iostream>
using namespace std;
int main()

{
   
   char choice1, choice2;
   string P,R,S,p,r,s ;



   
   {
        
        cout << "Player 1, please show your choice \n";
        cin >> choice1 ; 
        cout << "Player 2, please show your choice \n" ;
        cin >> choice2 ; 

       
       if ((choice1 =='R' ||choice1== 'r') && (choice2 =='S' || choice2=='s'))
       {
           cout << " Player1 won! \n ";
       }
       
       else if ((choice1 =='S' ||choice1=='s') && (choice2 =='P' ||choice2=='p'))
       {
           cout << "Player 1 won! \n ";
       }
       
       else if ((choice1 =='P' ||choice1== 'p') && (choice2 =='R' || choice2=='r'))
       {
           cout << "Player 1 won! \n ";
       }
       
       else if ((choice2 =='R' ||choice2=='r') && (choice1 =='S' ||choice1=='s'))
       {
           cout << "Player 2 won! \n ";
       }
       
       else if ((choice2 == 'S' ||choice2== 's') && (choice1 =='P' ||choice1=='p'))
       {
           cout << "Player1 wins, Scissors cuts paper \n ";
       }
     
       else if ((choice2 =='P' || choice2=='p') && (choice1 =='R' || choice1=='r'))
       {
           cout << "Player2 wins, Scissors cuts paper \n ";
       }
      
       else if ((choice1 =='R' ||choice2== 'r') ||
           (choice1 =='S' ||choice2== 's')||
           (choice1 =='S' ||choice2== 's')
           )
       {
           //print its draw
           cout << "No one wins!\n";
       }


   } 
   return 0;


}

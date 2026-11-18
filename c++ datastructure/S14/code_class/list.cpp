// List class 
#include "list.h"  
////////////////////////////
#include <iostream>
#include <conio.h>
using namespace std;
//////////////////////////////////
int main()
{ 
   List< int > x;
   int choice,a;
      
   cout  << "  1 : insert at beginning \n" 
         << "  2 : insert at end \n" 
         << "  3 : delete from beginning \n" 
         << "  4 : delete from end \n" 
         << "  5 : exit \n";

   do {
      cout << "\n\nenter(1 to 5) : ";
      cin >> choice;

      switch ( choice ) 
	  {
         case 1:
            cout << "Enter: " ;
            cin >> a;
            x.insertAtFront( a );
            x.print();
            break;

         case 2:
            cout << "Enter: " ;
            cin >> a;
            x.insertAtBack( a );
            x.print();
            break;

         case 3:
            if ( x.removeFromFront( a ) )
               cout << a << " removed. \n";
            x.print();
            break;

         case 4:
            if ( x.removeFromBack( a ) )
               cout << a << " removed. \n";
            x.print();
            break;
     } 
   } while ( choice != 5 ); 
   
   getch();
	
} 


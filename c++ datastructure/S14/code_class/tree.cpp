// bst (inorder)
#include <iostream>
#include <iomanip>
#include <conio.h>

using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;

#include "tree.h" 
////////////////////////////////////////////////////////////
int main()
{
   Tree< int > T; 
   int x;

   cout << "Enter 7 integer values:\n";

   for( int i = 0; i < 7; i++ ) {
      cin >> x;
      T.insertNode( x );
   } 

   cout << "\nInorder traversal\n";
   T.inOrderTraversal();
///////////////////////////////////////////
   Tree< double > DT; 
   double d;

   cout << fixed << setprecision( 1 );
   cout << "\n\n\nEnter 7 double values:\n";

   for ( int j = 0; j < 7; j++ ) 
   {
      cin >> d;
      DT.insertNode( d );
   } 

   cout << "\nInorder traversal\n";
   DT.inOrderTraversal();

	getch();

} 

#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <new>
#include "treenode.h"
using std::endl;
////////////////////////////////////////////////
template< class NT >
class Tree 
{
  private:
   	TreeNode< NT > *root;
   	void f( TreeNode< NT > **, const NT & );
   	void inOrderHelper( TreeNode< NT > * ) const;
   
  public:
   	Tree();
   	void insertNode( const NT & );
   	void inOrderTraversal() const;
}; 
/////////////////////////////////
template< class NT >
Tree< NT >::Tree() 
{ 
   root = 0; 
} 
/////////////////////////////////
template< class NT >
void Tree< NT >::insertNode( const NT &value )
{ 
   f( &root, value ); 
} 
///////////////////////////////////////////////
template< class NT >
void Tree< NT >::f( TreeNode< NT > **p, const NT &value )
{
   if ( *p == 0 )  
      *p = new TreeNode< NT >( value );
   else  
      if ( value < ( *p )->data )
         f( &( ( *p )->left ), value );
      else
         if ( value > ( *p )->data )
            f( &( ( *p )->right ), value );
         else  
            cout << value << " dup" << endl;
} 

///////////////////////////////////////////////////
template< class NT >
void Tree< NT >::inOrderTraversal() const
{ 
   inOrderHelper( root ); 
} 
///////////////////////////////////////////////
template< class NT >
void Tree< NT >::inOrderHelper( TreeNode< NT > *p ) const
{
   if ( p != 0 ) {
      inOrderHelper( p->left );   
      cout << p->data << ' ';        
      inOrderHelper( p->right );  
   } 
} 

#endif


